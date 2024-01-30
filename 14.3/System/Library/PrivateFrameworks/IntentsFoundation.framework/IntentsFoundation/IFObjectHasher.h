@interface IFObjectHasher : NSObject {
    struct SipHasher { int _c; int _d; unsigned long long _v0; unsigned long long _v1; unsigned long long _v2; unsigned long long _v3; struct TailBuffer { unsigned long long value; } _buffer; } _hasher;
    unsigned long long _hash;
    BOOL _finalized;
}

- (id)combineBool:(BOOL)a0;
- (id)combineContentsOfPropertyListObject:(id)a0;
- (id)combineBytes:(void *)a0 size:(unsigned long long)a1;
- (id).cxx_construct;
- (unsigned long long)finalize;
- (id)combineInteger:(unsigned long long)a0;
- (id)combine:(id)a0;

@end
