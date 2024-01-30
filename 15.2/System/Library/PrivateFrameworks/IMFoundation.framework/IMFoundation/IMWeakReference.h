@interface IMWeakReference : NSObject {
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakRefWithObject:(id)a0;

- (id)copyObject;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initRefWithObject:(id)a0;
- (unsigned long long)hash;
- (id)object;

@end
