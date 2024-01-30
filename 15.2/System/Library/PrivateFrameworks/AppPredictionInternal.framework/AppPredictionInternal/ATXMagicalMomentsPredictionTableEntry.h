@class ATXMagicalMomentsPrediction, NSCompoundPredicate;

@interface ATXMagicalMomentsPredictionTableEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXMagicalMomentsPrediction *prediction;
@property (readonly, nonatomic) NSCompoundPredicate *compoundPredicate;

+ (id)compoundPredicateFromPredicateArray:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithPrediction:(id)a0 applicableCompoundPredicate:(id)a1;
- (id)initWithPrediction:(id)a0 applicablePredicates:(id)a1;

@end
