@class NSString, _TVRSiriHaptic, UIView, _TVRUIButtonPanelView;
@protocol TVRUIDevice, TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIControlPanelViewController : UIViewController <_TVRUIEventDelegate, TVRUIRemoteViewProvider>

@property (retain, nonatomic) _TVRUIButtonPanelView *touchpadButtonPanel;
@property (retain, nonatomic) _TVRUIButtonPanelView *genericButtonPanel;
@property (retain, nonatomic) _TVRUIButtonPanelView *panelWithKeyboardButton;
@property (retain, nonatomic) _TVRUIButtonPanelView *legacyButtonPanel;
@property (retain, nonatomic) _TVRUIButtonPanelView *legacyPanelWithKeyboardButton;
@property (retain, nonatomic) id<TVRUIDevice> remoteDevice;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) _TVRSiriHaptic *siriHaptic;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonActionsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDevice:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)disableControls;
- (void)enableSearchButton;
- (void)disableSearchButton;
- (void)transitonToViewForDeviceType:(long long)a0;
- (void)enableControls;
- (void)showKeyboardButton;
- (void)hideKeyboardButton;
- (void)_createTouchpadButtonPanel;
- (void)_transitionToPanelView:(id)a0;
- (id)_createViewWithPrimaryButtonType:(long long)a0 leftButtonTypes:(id)a1 rightButtonTypes:(id)a2;
- (void)_createLegacyPanelWithkeyboard;
- (void)_createButtonPanelWithKeyboard;
- (void)_createLegacyButtonPanel;
- (void)_transitionToButtonPanelAndCreateIfNeeded;
- (void)_transitionToTouchpadPanelAndCreateIfNeeded;
- (void)_createGenericControlButtonPanel;

@end
