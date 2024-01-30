@class SCRCMathExpression;

@interface SCRCMathRadicalExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *radicand;
@property (retain, nonatomic) SCRCMathExpression *rootIndex;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)subExpressions;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)latexMathModeDescription;
- (unsigned long long)fractionLevel;
- (BOOL)_isSquareRoot;
- (BOOL)_isCubeRoot;

@end
