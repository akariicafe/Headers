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

+ (id)inputViewControllerWithView:(id)a0;
+ (void)applicationDidReceiveMemoryWarning:(id)a0;
+ (id)inputSnapshotViewForInputMode:(id)a0 orientation:(long long)a1;
+ (BOOL)_requiresProxyInterface;
+ (id)deferredInputModeControllerWithKeyboard:(id)a0;

- (void)setDeferredSystemView:(id)a0;
- (void)setInputMode:(id)a0;
- (void)willResume:(id)a0;
- (void)resetInputModeInMainThread;
- (id)_compatView;
- (void)takeSnapshotView;
- (void)addSnapshotViewForInputMode:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didSuspend:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tearDownInputController;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)validateInputModeIsDisplayed;
- (BOOL)_canShowWhileLocked;
- (id)_systemViewControllerForInputMode:(id)a0;
- (id)_keyboard;
- (void)killIncomingExtension;
- (void)rebuildChildConstraints;
- (void)loadView;
- (id)_initAsDeferredController;
- (void)resetInputMode;
- (void)finishSplitTransition:(BOOL)a0;
- (void)isHosted:(id)a0;
- (id)childCompatibilityController;
- (id)_keyboardForThisViewController;
- (void)removeSnapshotView;
- (void)assertCurrentInputModeIfNecessary;
- (void)shouldUpdateInputMode:(id)a0;
- (void)keyboardWillChangeFromDelegate:(id)a0 toDelegate:(id)a1;
- (void)didFinishTranslation;
- (void)willBeginTranslation;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)_compatibilityController;
- (void)setTearingDownInputController;
- (id)preferredFocusedView;
- (void)dealloc;
- (void)generateCompatibleSizeConstraintsIfNecessary;

@end
