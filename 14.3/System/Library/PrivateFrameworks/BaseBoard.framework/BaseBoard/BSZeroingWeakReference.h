@interface BSZeroingWeakReference : NSObject {
    id _object;
    Class _objectClass;
    unsigned long long _objectAddress;
}

@property (readonly, weak, nonatomic) id object;

+ (id)referenceWithObject:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
