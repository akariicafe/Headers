@interface ML3WeakReference : NSObject {
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakReferenceWithObject:(id)a0;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)object;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
