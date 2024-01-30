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
- (void)layoutSubviews;
- (void)_updateScreenTimeLockoutView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_fontWithTextStyle:(id)a0 symbolicTraits:(unsigned int)a1 maxSizeCategory:(id)a2;
- (id)initWithGridSizeClass:(unsigned long long)a0 applicationName:(id)a1;

@end
