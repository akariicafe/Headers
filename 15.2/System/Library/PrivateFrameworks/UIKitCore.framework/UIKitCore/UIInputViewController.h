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

+ (void)presentDialogForAddingKeyboard;
+ (BOOL)_requiresProxyInterface;

- (void)_willResetDocumentState;
- (void)didReceiveMemoryWarning;
- (BOOL)_canResignIfContainsFirstResponder;
- (void)_setupInputController;
- (void)viewDidLoad;
- (void)set_autosizeToCurrentKeyboard:(BOOL)a0;
- (void)_setExtensionContextUUID:(id)a0;
- (void)_setTextDocumentProxy:(id)a0;
- (void)loadView;
- (void)returnToPreviousInputMode;
- (void)requestSupplementaryLexiconWithCompletion:(id /* block */)a0;
- (void)setView:(id)a0;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (void)selectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)_textDocumentInterface;
- (void)textDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_extensionContext;
- (void)selectionWillChange:(id)a0;
- (BOOL)_usesCustomBackground;
- (void)proceedShouldReturnIfPossibleForASP;
- (void)_updateConformanceCache;
- (void)textWillChange:(id)a0;
- (id)_compatibilityController;
- (void)_didResetDocumentState;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)handleInputModeListFromView:(id)a0 withEvent:(id)a1;
- (void)dismissKeyboard;
- (BOOL)_canBecomeFirstResponder;
- (void)advanceToNextInputMode;
- (id)_proxyInterface;

@end
