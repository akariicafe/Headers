@class BSUIFontProvider, NSString, NCBadgedIconView, NSArray, UIView, UILabel, MTVisualStylingProvider;

@interface NCIntegerIndicatorBadge : UIView <NCIntegerIndicatorBadging, PLContentSizeCategoryAdjusting, MTVisualStylingRequiring> {
    UIView *_countBackgroundView;
    UILabel *_countLabel;
    MTVisualStylingProvider *_strokeStylingProvider;
    BSUIFontProvider *_fontProvider;
}

@property (nonatomic) unsigned long long badgeCount;
@property (readonly, nonatomic) long long badgeType;
@property (nonatomic) unsigned long long badgeLocation;
@property (weak, nonatomic) NCBadgedIconView *badgedIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (id)_fontProvider;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)_configureCountLabelIfNecessary;
- (void)_configureCountBackgroundViewIfNecessary;
- (void)_updateTextAttributesForCountLabel;
- (id)initWithBadgeCount:(unsigned long long)a0;

@end
