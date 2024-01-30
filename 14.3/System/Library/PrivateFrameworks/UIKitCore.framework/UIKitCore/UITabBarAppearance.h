@class UIColor, UIImage, _UITabBarLayoutData, UITabBarItemAppearance;

@interface UITabBarAppearance : UIBarAppearance {
    _UITabBarLayoutData *_layoutData;
}

@property (copy, nonatomic) UITabBarItemAppearance *stackedLayoutAppearance;
@property (copy, nonatomic) UITabBarItemAppearance *inlineLayoutAppearance;
@property (copy, nonatomic) UITabBarItemAppearance *compactInlineLayoutAppearance;
@property (copy, nonatomic) UIColor *selectionIndicatorTintColor;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (nonatomic) long long stackedItemPositioning;
@property (nonatomic) double stackedItemWidth;
@property (nonatomic) double stackedItemSpacing;

+ (BOOL)supportsSecureCoding;

- (BOOL)_checkEqualTo:(id)a0;
- (id)_dataForItemStyle:(long long)a0;
- (void).cxx_destruct;
- (id)_compactInlineTabButtonAppearanceData;
- (void)_copyFromAppearance:(id)a0;
- (id)_tabLayoutAppearanceData;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (id)_stackedTabButtonAppearanceData;
- (void)_decodeFromCoder:(id)a0;
- (void)_completeInit;
- (void)_setupDefaults;
- (void)_tabBarItemDataChanged:(id)a0;
- (void)_describeInto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_inlineTabButtonAppearanceData;

@end
