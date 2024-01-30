@class NSString, UIKBScreenTraits, UIKBTree, NSMutableArray, UITextInputTraits, UIKeyboardLayoutStar, UIKeyboardTaskQueue, UIKBViewForResponderForwarding;

@interface UIKeyboardPopoverController : UIViewController <UIKeyboardLayoutStarDelegate> {
    NSString *_inputMode;
    UIKeyboardLayoutStar *_layout;
    UIKBScreenTraits *_screenTraits;
    UITextInputTraits *_textInputTraits;
    UIKeyboardTaskQueue *_taskQueue;
    UIKBTree *_keyboard;
    NSMutableArray *_hiddenKeys;
    UIKBViewForResponderForwarding *_containerForActiveKeys;
}

@property (readonly, nonatomic) NSString *inputModeIdentifier;
@property (readonly, nonatomic) UIKeyboardLayoutStar *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)keyboardLayout:(id)a0 containingViewForActiveKey:(id)a1 inKeyplaneView:(id)a2;
- (id)initWithInputModeIdentifier:(id)a0 textInputTraits:(id)a1 taskQueue:(id)a2;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)handleHardwareKeyboardEvent:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidAppear:(BOOL)a0;
- (id)keyboardLayout:(id)a0 willChangeRenderConfig:(id)a1;
- (void)keyboardLayout:(id)a0 didSwitchToKeyplane:(id)a1;
- (void)viewDidLoad;

@end
