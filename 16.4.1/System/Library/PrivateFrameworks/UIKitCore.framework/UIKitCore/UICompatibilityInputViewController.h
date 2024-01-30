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

+ (void)applicationDidReceiveMemoryWarning:(id)a0;
+ (id)deferredInputModeControllerWithKeyboard:(id)a0;
+ (id)inputViewControllerWithView:(id)a0;
+ (id)inputSnapshotViewForInputMode:(id)a0 orientation:(long long)a1;
+ (BOOL)_requiresProxyInterface;

- (void)didSuspend:(id)a0;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (id)_compatibilityController;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)removeSnapshotView;
- (void)willResume:(id)a0;
- (id)_keyboard;
- (void)setInputMode:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)setTearingDownInputController;
- (void)keyboardWillChangeFromDelegate:(id)a0 toDelegate:(id)a1;
- (void)isHosted:(id)a0;
- (void)shouldUpdateInputMode:(id)a0;
- (void)setDeferredSystemView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)didFinishTranslation;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)willBeginTranslation;
- (void)killIncomingExtension;
- (void)resetInputModeInMainThread;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)addSnapshotViewForInputMode:(id)a0;
- (id)_compatView;
- (void)takeSnapshotView;
- (void)resetInputMode;
- (void)tearDownInputController;
- (void)finishSplitTransition:(BOOL)a0;
- (void)dealloc;
- (id)_initAsDeferredController;
- (id)childCompatibilityController;
- (void)assertCurrentInputModeIfNecessary;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (id)_keyboardForThisViewController;
- (void)viewWillDisappear:(BOOL)a0;
- (void)validateInputModeIsDisplayed;
- (id)_systemViewControllerForInputMode:(id)a0;
- (void).cxx_destruct;
- (void)rebuildChildConstraints;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)preferredFocusedView;

@end
