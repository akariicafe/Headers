@class NSSet;

@interface BMRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long basketCount;
@property (readonly, nonatomic) unsigned long long absoluteSupport;
@property (readonly, nonatomic) unsigned long long absoluteAntecedentSupport;
@property (readonly, nonatomic) unsigned long long absoluteConsequentSupport;
@property (readonly, nonatomic) double lift;
@property (readonly, nonatomic) double conviction;
@property (readonly, nonatomic) double rulePowerFactor;
@property (readonly, nonatomic) unsigned long long uniqueDaysLastWeek;
@property (readonly, nonatomic) unsigned long long uniqueDaysTotal;
@property (readonly, nonatomic) NSSet *antecedent;
@property (readonly, nonatomic) NSSet *consequent;
@property (readonly, nonatomic) double support;
@property (readonly, nonatomic) double confidence;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAntecedent:(id)a0 consequent:(id)a1 support:(double)a2 confidence:(double)a3 basketCount:(unsigned long long)a4 absoluteSupport:(unsigned long long)a5 absoluteAntecedentSupport:(unsigned long long)a6 absoluteConsequentSupport:(unsigned long long)a7 uniqueDaysLastWeek:(unsigned long long)a8 uniqueDaysTotal:(unsigned long long)a9;
- (id)initWithAntecedent:(id)a0 consequent:(id)a1 support:(double)a2 confidence:(double)a3 basketCount:(unsigned long long)a4 absoluteSupport:(unsigned long long)a5 absoluteAntecedentSupport:(unsigned long long)a6 absoluteConsequentSupport:(unsigned long long)a7;
- (id)initWithAntecedent:(id)a0 consequent:(id)a1 support:(double)a2 confidence:(double)a3;

@end
