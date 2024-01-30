@interface SXWeakReferenceObject : NSObject

@property (readonly, weak, nonatomic) id object;

+ (id)withObject:(id)a0;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
