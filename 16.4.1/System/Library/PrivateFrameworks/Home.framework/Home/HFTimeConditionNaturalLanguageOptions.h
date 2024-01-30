@interface HFTimeConditionNaturalLanguageOptions : HFConditionNaturalLanguageOptions

@property (nonatomic) unsigned long long timeContext;
@property (nonatomic) unsigned long long type;

- (id)initWithFormattingContext:(long long)a0 formattingStyle:(long long)a1;
- (id)initWithFormattingContext:(long long)a0 formattingStyle:(long long)a1 type:(unsigned long long)a2;

@end
