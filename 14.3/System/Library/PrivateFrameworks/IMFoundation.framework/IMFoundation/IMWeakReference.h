@interface IMWeakReference : NSObject {
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakRefWithObject:(id)a0;

- (id)copyObject;
- (void).cxx_destruct;
- (id)object;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initRefWithObject:(id)a0;

@end
