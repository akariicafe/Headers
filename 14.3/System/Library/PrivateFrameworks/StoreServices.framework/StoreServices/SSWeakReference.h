@interface SSWeakReference : NSObject {
    id _object;
    unsigned long long _objectAddress;
}

@property (readonly, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
