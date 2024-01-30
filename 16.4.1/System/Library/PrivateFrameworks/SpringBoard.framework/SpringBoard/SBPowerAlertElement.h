@class UIColor, NSString, BSUICAPackageView, UILabel, FBScene;

@interface SBPowerAlertElement : SBAlertProvidedContentElement <SBSystemApertureContextProviding> {
    UIColor *_keyColor;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (retain, nonatomic) UILabel *leadingLabel;
@property (retain, nonatomic) UILabel *trailingBatteryLabel;
@property (retain, nonatomic) BSUICAPackageView *trailingBatteryIconPackageView;
@property (retain, nonatomic) BSUICAPackageView *minimalBatteryIconPackageView;
@property (nonatomic) double batteryPercentage;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateBatteryIconFillAreaForPackageView:(id)a0 withBatteryPercentage:(double)a1;
- (double)_batteryFillWidthForBatteryPercentage:(double)a0;
- (id)_leadingTextForStyle:(unsigned long long)a0;
- (double)_trailingViewWidth;
- (void)_updateBatteryContent;
- (void)_updateMinimalViewToState:(id)a0 withDelay:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 style:(unsigned long long)a1 batteryPercentage:(double)a2 lowPowerModeEnabled:(BOOL)a3 action:(id)a4;
- (BOOL)isProvidedViewConcentric:(id)a0 inLayoutMode:(long long)a1;
- (double)preferredAlertingDuration:(double)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;

@end
