@interface TMLWeakReferenceObject : NSObject

@property (readonly, weak, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
