@class NSString, UIView, UILabel, MTMaterialView;

@interface SBHWidgetContainerView : UIView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    BOOL _lastRequestedClipToBoundsValue;
}

@property (weak, nonatomic) UIView *widgetView;
@property (readonly, nonatomic) MTMaterialView *screenTimeLockoutView;
@property (nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration;
@property (nonatomic) unsigned long long gridSizeClass;
@property (copy, nonatomic) NSString *applicationName;
@property (nonatomic) BOOL requiresClippingToBounds;

- (void)setClipsToBounds:(BOOL)a0;
- (id)initWithGridSizeClass:(unsigned long long)a0 applicationName:(id)a1;
- (id)_fontWithTextStyle:(id)a0 symbolicTraits:(unsigned int)a1 maxSizeCategory:(id)a2;
- (void)layoutSubviews;
- (void)_updateScreenTimeLockoutView;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
