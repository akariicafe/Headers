@interface TMLWeakReferenceObject : NSObject

@property (readonly, weak, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
