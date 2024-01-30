@class SCRCMathExpression;

@interface SCRCMathFractionExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *numerator;
@property (retain, nonatomic) SCRCMathExpression *denominator;
@property (retain, nonatomic) SCRCMathExpression *operator;
@property (nonatomic) double lineThickness;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)latexMathModeDescription;
- (unsigned long long)fractionLevel;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(long long)a0;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)a0;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)a0 numberOfOuterRadicals:(unsigned long long)a1;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (BOOL)isSimpleNumericalFraction;
- (BOOL)isUnlinedFraction;
- (id)_speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1 asBinomialCoefficient:(BOOL)a2;
- (id)_speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2 asBinomialCoefficient:(BOOL)a3;
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(BOOL)a0 orMixedNumberFraction:(BOOL)a1 withNumberOfOuterRadicals:(unsigned long long)a2 treePosition:(id)a3;

@end
