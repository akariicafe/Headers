@class NSString;

@interface SCRCMathFencedExpression : SCRCMathRowExpression

@property (copy, nonatomic) NSString *openString;
@property (copy, nonatomic) NSString *closeString;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)mathMLTag;
- (id)mathMLAttributes;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (unsigned long long)fractionLevel;
- (BOOL)_isBinomialCoefficient;
- (id)_binomialCoefficientContent;
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)a0;

@end
