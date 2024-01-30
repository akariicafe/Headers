@interface BSZeroingWeakReference : NSObject {
    id _object;
    Class _objectClass;
    unsigned long long _objectAddress;
}

@property (readonly, weak, nonatomic) id object;

+ (id)referenceWithObject:(id)a0;

- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;

@end
