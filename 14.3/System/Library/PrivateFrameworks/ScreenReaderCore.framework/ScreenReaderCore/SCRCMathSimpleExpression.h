@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression

@property (copy, nonatomic) NSString *content;

- (long long)integerValue;
- (void).cxx_destruct;
- (BOOL)isInteger;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)_functionNames;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)latexMathModeDescription;
- (BOOL)canBeUsedWithBase;
- (BOOL)isFunctionName;
- (BOOL)isWordOrAbbreviation;

@end
