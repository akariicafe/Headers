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

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (double)_insetX;
- (void)_addOrRemoveCameraButtonIfNecessary;
- (void)_updateButtonBackgroundVisible;
- (void).cxx_destruct;
- (void)_removeTargetsFromButton:(id)a0;
- (void)_addOrRemoveFlashlightButtonIfNecessary;
- (id)_buttonGroupName;
- (void)_setButtonBackgroundVisible:(BOOL)a0;
- (void)_layoutQuickActionButtons;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_buttonOutsets;
- (void)handleButtonPress:(id)a0;
- (void)_addTargetsToButton:(id)a0;
- (double)_insetY;
- (void)refreshSupportedButtons;
- (void)layoutSubviews;
- (void)refreshFlashlightAvailability;
- (void)handleButtonTouchEnded:(id)a0;
- (void)handleButtonTouchBegan:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)_prototypingAllowsButtons;

@end
