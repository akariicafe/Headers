@class NSDictionary, UIColor, UIImageSymbolConfiguration;

@interface _UITabBarItemData : _UIBarAppearanceData {
    long long _style;
    NSDictionary *_titleTextAttributes[5];
    NSDictionary *_badgeTextAttributes[5];
    UIColor *_iconColor[5];
    UIColor *_badgeBackgroundColor[5];
    struct UIOffset { double horizontal; double vertical; } _titlePositionAdjustment[5];
    struct UIOffset { double horizontal; double vertical; } _badgePositionAdjustment[5];
    struct UIOffset { double horizontal; double vertical; } _badgeTitlePositionAdjustment[5];
    struct { unsigned char hasUserTitleFont : 1; unsigned char hasUserTitleColor : 1; unsigned char hasUserTitlePosition : 1; unsigned char hasUserIconColor : 1; unsigned char hasUserBadgePosition : 1; unsigned char hasUserBadgeBackgroundColor : 1; unsigned char hasUserBadgeTitleFont : 1; unsigned char hasUserBadgeTitleColor : 1; unsigned char hasUserBadgeTitlePosition : 1; } _stateFlags[5];
}

@property (readonly, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;

+ (id)standardItemDataForStyle:(long long)a0;
+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (BOOL)checkEqualTo:(id)a0;
- (id)badgeBackgroundColorForState:(long long)a0;
- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (void)describeInto:(id)a0;
- (id)titleTextAttributesForState:(long long)a0;
- (id)replicate;
- (id)_fallbackBadgeTitleFontForState:(long long)a0;
- (void).cxx_destruct;
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)a0 prefix:(id)a1;
- (void)setBadgeBackgroundColor:(id)a0 forState:(long long)a1;
- (long long)hashInto:(long long)a0;
- (void)_decodeTitleTextAttributesFromCoder:(id)a0 prefix:(id)a1;
- (void)_decodeBadgeTitlePositionAdjustmentsFromCoder:(id)a0 prefix:(id)a1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forState:(long long)a1;
- (void)_decodeIconColorFromCoder:(id)a0 prefix:(id)a1;
- (void)_decodeBadgePositionAdjustmentsFromCoder:(id)a0 prefix:(id)a1;
- (id)_fallbackBadgeTitleColorForState:(long long)a0;
- (void)setTitleTextAttributes:(id)a0 forState:(long long)a1;
- (void)_decodeBadgeBackgroundColorFromCoder:(id)a0 prefix:(id)a1;
- (id)iconColorForState:(long long)a0;
- (id)_fallbackTitleColorForState:(long long)a0;
- (struct UIOffset { double x0; double x1; })badgePositionAdjustmentForState:(long long)a0;
- (void)setBadgeTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forState:(long long)a1;
- (id)_fallbackTitleFontForState:(long long)a0;
- (id)badgeTextAttributesForState:(long long)a0;
- (void)setBadgePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forState:(long long)a1;
- (BOOL)titleTextAttributesSpecifyColorForState:(long long)a0;
- (void)setBadgeTextAttributes:(id)a0 forState:(long long)a1;
- (struct UIOffset { double x0; double x1; })titlePositionAdjustmentForState:(long long)a0;
- (void)setIconColor:(id)a0 forState:(long long)a1;
- (struct UIOffset { double x0; double x1; })badgeTitlePositionAdjustmentForState:(long long)a0;
- (void)_decodeBadgeTextAttributesFromCoder:(id)a0 prefix:(id)a1;

@end
