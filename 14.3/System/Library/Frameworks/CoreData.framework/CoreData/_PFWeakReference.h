@interface _PFWeakReference : NSObject {
    id _object;
    long long _objectAddress;
}

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
