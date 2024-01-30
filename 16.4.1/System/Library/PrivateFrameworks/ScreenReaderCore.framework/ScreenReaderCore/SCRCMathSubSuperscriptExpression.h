@class SCRCMathExpression;

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *base;
@property (retain, nonatomic) SCRCMathExpression *subscript;
@property (retain, nonatomic) SCRCMathExpression *superscript;

- (BOOL)isNumber;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)mathMLString;
- (id)_stringToAddForSuperscript:(id)a0 withPriorDescription:(id)a1 updatedDescription:(id *)a2;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (unsigned long long)fractionLevel;
- (BOOL)isBaseSubSuperscript;
- (BOOL)isRangeSubSuperscript;
- (id)latexMathModeDescription;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)subExpressions;

@end
