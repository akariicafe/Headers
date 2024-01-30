@class CSDashBoardQuickActionsButtonSettings, NSString, CSQuickActionsButton, _UILegibilitySettings;
@protocol CSQuickActionsDelegate;

@interface CSQuickActionsView : SBFTouchPassThroughView <PTSettingsKeyObserver>

@property (retain, nonatomic) CSDashBoardQuickActionsButtonSettings *quickActionsSettings;
@property (weak, nonatomic) id<CSQuickActionsDelegate> delegate;
@property (retain, nonatomic) CSQuickActionsButton *flashlightButton;
@property (retain, nonatomic) CSQuickActionsButton *cameraButton;
@property (nonatomic) BOOL flashlightOn;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)layoutSubviews;
- (BOOL)_prototypingAllowsButtons;
- (id)_buttonGroupName;
- (void)_addTargetsToButton:(id)a0;
- (double)_insetY;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)_updateButtonBackgroundVisible;
- (void)_addOrRemoveCameraButtonIfNecessary;
- (double)_insetX;
- (void)_removeTargetsFromButton:(id)a0;
- (void)handleButtonPress:(id)a0;
- (void)refreshFlashlightAvailability;
- (void)_setButtonBackgroundVisible:(BOOL)a0;
- (void)handleButtonTouchBegan:(id)a0;
- (void)_layoutQuickActionButtons;
- (void)handleButtonTouchEnded:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_buttonOutsets;
- (void)refreshSupportedButtons;
- (void)_addOrRemoveFlashlightButtonIfNecessary;

@end
