@class NSString, UIKeyboard, UIInputView;
@protocol UITextDocumentProxy;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate> {
    BOOL _commitInputModeOnTouchEnd;
    BOOL _inputModeListIsShown;
    BOOL _viewConformsToRemotePlaceholder;
    double _touchBegan;
}

@property (readonly, nonatomic) UIKeyboard *_keyboard;
@property (readonly, nonatomic) BOOL _isPlaceholder;
@property (nonatomic) BOOL _alignsToContentViewController;
@property (nonatomic, setter=_setAutosizeToCurrentKeyboard:) BOOL _autosizeToCurrentKeyboard;
@property (retain, nonatomic) UIInputView *inputView;
@property (readonly, nonatomic) id<UITextDocumentProxy> textDocumentProxy;
@property (copy, nonatomic) NSString *primaryLanguage;
@property (nonatomic) BOOL hasDictationKey;
@property (readonly, nonatomic) BOOL hasFullAccess;
@property (readonly, nonatomic) BOOL needsInputModeSwitchKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_requiresProxyInterface;
+ (void)presentDialogForAddingKeyboard;

- (void)setView:(id)a0;
- (void)textWillChange:(id)a0;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)_willResetDocumentState;
- (void)proceedShouldReturnIfPossibleForASP;
- (id)_compatibilityController;
- (void)dealloc;
- (void)selectionWillChange:(id)a0;
- (void)set_autosizeToCurrentKeyboard:(BOOL)a0;
- (void)loadView;
- (void)requestSupplementaryLexiconWithCompletion:(id /* block */)a0;
- (BOOL)_canBecomeFirstResponder;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (void)dismissKeyboard;
- (id)initWithCoder:(id)a0;
- (void)_setupInputController;
- (void)_updateConformanceCache;
- (void)returnToPreviousInputMode;
- (id)_extensionContext;
- (void)didReceiveMemoryWarning;
- (id)_textDocumentInterface;
- (void)advanceToNextInputMode;
- (void)viewDidAppear:(BOOL)a0;
- (void)textDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_setExtensionContextUUID:(id)a0;
- (void)selectionDidChange:(id)a0;
- (void)_setTextDocumentProxy:(id)a0;
- (id)_proxyInterface;
- (void)_didResetDocumentState;
- (void)handleInputModeListFromView:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (BOOL)_canResignIfContainsFirstResponder;

@end
