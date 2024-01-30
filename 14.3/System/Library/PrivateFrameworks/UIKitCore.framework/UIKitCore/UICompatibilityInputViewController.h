@class NSArray, UILayoutGuide, NSString, UIKeyboardInputMode, UIKeyboard, UIViewController;
@protocol UITextCursorAssertion;

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {
    UIKeyboardInputMode *_inputMode;
    UIKeyboard *_deferredSystemView;
    UIKeyboardInputMode *_incomingExtensionInputMode;
    double _incomingExtensionInputModeTime;
    double _lastSuspendedTime;
    double _currentResumeTime;
    BOOL _shouldRegenerateSizingConstraints;
    BOOL _shouldSuppressRemoteInputController;
    BOOL _tearingDownInputController;
    double _resetInputModeTime;
    unsigned long long _latestDelayTime;
    UILayoutGuide *_focusSafeAreaLayoutGuide;
}

@property (retain, nonatomic) UIViewController *inputController;
@property (retain, nonatomic) NSArray *internalEdgeMatchConstraints;
@property (retain, nonatomic) id<UITextCursorAssertion> blinkAssertion;
@property (readonly, nonatomic) UILayoutGuide *focusSafeAreaLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deferredInputModeControllerWithKeyboard:(id)a0;
+ (void)applicationDidReceiveMemoryWarning:(id)a0;
+ (BOOL)_requiresProxyInterface;
+ (id)inputViewControllerWithView:(id)a0;
+ (id)inputSnapshotViewForInputMode:(id)a0 orientation:(long long)a1;

- (id)_keyboard;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)willResume:(id)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)addSnapshotViewForInputMode:(id)a0;
- (void)didSuspend:(id)a0;
- (void)finishSplitTransition:(BOOL)a0;
- (void)setInputMode:(id)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)removeSnapshotView;
- (id)preferredFocusedView;
- (id)_compatView;
- (void)rebuildChildConstraints;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)_compatibilityController;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewWillDisappear:(BOOL)a0;
- (void)resetInputMode;
- (void)takeSnapshotView;
- (void)loadView;
- (void)keyboardWillChangeFromDelegate:(id)a0 toDelegate:(id)a1;
- (id)childCompatibilityController;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)shouldUpdateInputMode:(id)a0;
- (void)validateInputModeIsDisplayed;
- (void)didFinishTranslation;
- (void)assertCurrentInputModeIfNecessary;
- (void)setDeferredSystemView:(id)a0;
- (id)_keyboardForThisViewController;
- (void)willBeginTranslation;
- (id)_systemViewControllerForInputMode:(id)a0;
- (id)_initAsDeferredController;
- (void)isHosted:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)tearDownInputController;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (void)setTearingDownInputController;
- (void)resetInputModeInMainThread;
- (void)killIncomingExtension;

@end
