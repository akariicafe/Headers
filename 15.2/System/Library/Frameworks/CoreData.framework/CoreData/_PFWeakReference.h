@interface _PFWeakReference : NSObject {
    id _object;
    long long _objectAddress;
}

- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
