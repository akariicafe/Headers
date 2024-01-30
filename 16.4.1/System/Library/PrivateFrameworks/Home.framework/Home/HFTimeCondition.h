@interface HFTimeCondition : HFCondition

+ (id)defaultConditionForType:(unsigned long long)a0;
+ (id)_formattedStringForDateComponentsCondition:(id)a0 style:(unsigned long long)a1 formattingContext:(long long)a2;
+ (id)_formattedStringForOffset:(id)a0;
+ (id)_formattedStringForSunriseSunsetCondition:(id)a0 style:(unsigned long long)a1 formattingContext:(long long)a2;
+ (id)_formattedStringForTimeCondition:(id)a0 style:(unsigned long long)a1 formattingContext:(long long)a2;
+ (id)_formattedStringForTimeRangeCondition:(id)a0 style:(unsigned long long)a1 formattingContext:(long long)a2;
+ (id)_nameForConditionType:(unsigned long long)a0 formattingStyle:(long long)a1 formattingContext:(long long)a2;
+ (id)hf_naturalLanguageSummaryForTypeOnlyWithOptions:(id)a0;

- (unsigned long long)timeConditionType;
- (id)hf_naturalLanguageSummaryWithOptions:(id)a0;

@end
