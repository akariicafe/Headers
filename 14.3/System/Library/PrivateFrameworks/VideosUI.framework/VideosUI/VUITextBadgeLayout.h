@class NSArray, TVImageLayout, VUITextLayout;

@interface VUITextBadgeLayout : TVViewLayout

@property (nonatomic) unsigned long long badgeKind;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSArray *gradientBgColors;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) TVImageLayout *imageLayout;

+ (unsigned long long)textBadgeTypeFromString:(id)a0;
+ (id)layoutWithViewElement:(id)a0 withTextBadgeType:(unsigned long long)a1;
+ (id)_spotlightBadgeLayoutWithViewElement:(id)a0;
+ (id)_textBadgeLayoutWithViewElement:(id)a0 withBadgeType:(unsigned long long)a1;
+ (long long)_badgeSizeForElement:(id)a0;
+ (id)_glyphImageLayoutWithTintColor:(id)a0 viewElement:(id)a1;
+ (id)layoutWithViewElement:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateTextColorWithViewElement:(id)a0 defaultColor:(id)a1;
- (void)_updateBgColorWithViewElement:(id)a0 defaultColor:(id)a1;

@end
