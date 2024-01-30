@class SCRCMathExpression;

@interface SCRCMathUnderOverExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *under;
@property (retain, nonatomic) SCRCMathExpression *over;
@property (retain, nonatomic) SCRCMathExpression *base;

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
- (BOOL)isRangeSubSuperscript;

@end
