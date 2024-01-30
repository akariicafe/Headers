@class NSString, UIView, UILabel, MTMaterialView;

@interface SBHWidgetContainerView : UIView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property (weak, nonatomic) UIView *widgetView;
@property (readonly, nonatomic) MTMaterialView *screenTimeLockoutView;
@property (nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration;
@property (nonatomic) unsigned long long gridSizeClass;
@property (copy, nonatomic) NSString *applicationName;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateScreenTimeLockoutView;
- (id)_fontWithTextStyle:(id)a0 symbolicTraits:(unsigned int)a1;
- (id)initWithGridSizeClass:(unsigned long long)a0 applicationName:(id)a1;

@end
