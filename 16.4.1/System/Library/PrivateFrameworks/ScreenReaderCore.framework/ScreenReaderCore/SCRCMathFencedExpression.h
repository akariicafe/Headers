@class NSString;

@interface SCRCMathFencedExpression : SCRCMathRowExpression

@property (copy, nonatomic) NSString *openString;
@property (copy, nonatomic) NSString *closeString;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_binomialCoefficientContent;
- (BOOL)_isBinomialCoefficient;
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)a0;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (unsigned long long)fractionLevel;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (id)mathMLAttributes;
- (id)mathMLTag;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;

@end
