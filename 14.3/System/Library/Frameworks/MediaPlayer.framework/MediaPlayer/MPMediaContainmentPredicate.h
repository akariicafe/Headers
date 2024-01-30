@class NSString, NSSet;

@interface MPMediaContainmentPredicate : MPMediaPredicate

@property (readonly, copy, nonatomic) NSString *property;
@property (readonly, copy, nonatomic) NSSet *values;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 values:(id)a1;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_ML3PredicateForEntityClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;

@end
