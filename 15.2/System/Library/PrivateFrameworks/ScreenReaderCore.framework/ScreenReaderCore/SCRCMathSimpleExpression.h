@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression

@property (copy, nonatomic) NSString *content;

- (long long)integerValue;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isInteger;
- (id)_functionNames;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)latexMathModeDescription;
- (BOOL)canBeUsedWithBase;
- (BOOL)isFunctionName;
- (BOOL)isWordOrAbbreviation;

@end
