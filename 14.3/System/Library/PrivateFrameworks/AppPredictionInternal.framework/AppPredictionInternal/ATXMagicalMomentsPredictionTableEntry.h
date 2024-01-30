@class ATXMagicalMomentsPrediction, NSCompoundPredicate;

@interface ATXMagicalMomentsPredictionTableEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXMagicalMomentsPrediction *prediction;
@property (readonly, nonatomic) NSCompoundPredicate *compoundPredicate;

+ (id)compoundPredicateFromPredicateArray:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPrediction:(id)a0 applicableCompoundPredicate:(id)a1;
- (id)initWithPrediction:(id)a0 applicablePredicates:(id)a1;

@end
