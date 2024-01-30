@interface HMFWeakObject : HMFObject

@property (readonly, nonatomic) unsigned long long objectHash;
@property (readonly, weak) id object;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithWeakObject:(id)a0;

@end
