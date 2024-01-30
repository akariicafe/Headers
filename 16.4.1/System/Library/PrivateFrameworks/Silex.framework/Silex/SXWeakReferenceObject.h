@interface SXWeakReferenceObject : NSObject

@property (readonly, weak, nonatomic) id object;

+ (id)withObject:(id)a0;

- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
