@class NSComparisonPredicate, NSSortDescriptor;

@interface HKQuerySortConstraint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSortDescriptor *sortDescriptor;
@property (readonly, copy, nonatomic) NSComparisonPredicate *predicate;

+ (id)sortConstraintWithSortDescriptor:(id)a0 predicate:(id)a1;
+ (id)sortConstraintByRelaxingSortConstraint:(id)a0 error:(id *)a1;

- (BOOL)canRelax;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSortDescriptor:(id)a0 predicate:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
