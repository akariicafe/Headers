@class CSDashBoardQuickActionsButtonSettings, NSString, NSArray, CSQuickActionsButton, _UILegibilitySettings;
@protocol CSQuickActionsDelegate;

@interface CSQuickActionsView : SBFTouchPassThroughView <PTSettingsKeyObserver, SBFCustomImplicitPropertyAnimating>

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
@property (copy, nonatomic) NSArray *animatedLayerProperties;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_addOrRemoveCameraButtonIfNecessary;
- (double)_insetY;
- (void)_setButtonBackgroundVisible:(BOOL)a0;
- (double)_insetX;
- (void)refreshSupportedButtons;
- (void)handleButtonTouchEnded:(id)a0;
- (BOOL)_prototypingAllowsButtons;
- (id)_buttonGroupName;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)interpretsLocationAsContent:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)layoutSubviews;
- (void)_addTargetsToButton:(id)a0;
- (void)_layoutQuickActionButtons;
- (void)handleButtonTouchBegan:(id)a0;
- (void)handleButtonPress:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_buttonOutsets;
- (void)refreshFlashlightAvailability;
- (void)_removeTargetsFromButton:(id)a0;
- (void)_addOrRemoveFlashlightButtonIfNecessary;
- (void).cxx_destruct;
- (void)_updateButtonBackgroundVisible;

@end
