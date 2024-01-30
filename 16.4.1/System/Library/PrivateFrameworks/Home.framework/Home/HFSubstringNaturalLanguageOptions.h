@interface HFSubstringNaturalLanguageOptions : HFNaturalLanguageOptions

@property (nonatomic) long long formattingContext;
@property (nonatomic) long long formattingStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFormattingContext:(long long)a0 formattingStyle:(long long)a1;

@end
