@class NSUUID, UITextInputMode, NSString, _UIInputViewControllerState, UITextInputPasswordRules, TITextInputTraits, TIKeyboardOutput, _UIInputViewControllerOutput, TIDocumentState;
@protocol _UITextDocumentInterfaceDelegate;

@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy, UITextDocumentProxy_Private>

@property (retain, nonatomic, getter=_controllerState) _UIInputViewControllerState *controllerState;
@property (retain, nonatomic, getter=_controllerOutput) _UIInputViewControllerOutput *controllerOutput;
@property (readonly, nonatomic, getter=_documentState) TIDocumentState *documentState;
@property (readonly, nonatomic, getter=_textInputTraits) TITextInputTraits *textInputTraits;
@property (readonly, nonatomic, getter=_keyboardOutput) TIKeyboardOutput *keyboardOutput;
@property (nonatomic, getter=_delegate) id<_UITextDocumentInterfaceDelegate> delegate;
@property (readonly, nonatomic) NSString *documentContextBeforeInput;
@property (readonly, nonatomic) NSString *documentContextAfterInput;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) UITextInputMode *documentInputMode;
@property (readonly, copy, nonatomic) NSUUID *documentIdentifier;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *markedText;
@property (readonly, nonatomic) BOOL needsInputModeSwitchKey;

- (void)deleteBackward;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertText:(id)a0;
- (void)unmarkText;
- (void)_setShouldDismiss;
- (void)setForwardingInterface:(id)a0;
- (void)_setPrimaryLanguage:(id)a0;
- (void)_handleInputViewControllerState:(id)a0;
- (void)_setShouldAdvanceInputMode;
- (void)_setProceedShouldReturnIfPossibleForASP;
- (void)_setHasDictation:(BOOL)a0;
- (void)_setInputModeList:(long long)a0 touchBegan:(double)a1 fromLocation:(struct CGPoint { double x0; double x1; })a2 updatePoint:(struct CGPoint { double x0; double x1; })a3;
- (void)_createControllerOutputIfNecessary;
- (void)_willPerformOutputOperation;
- (void)_didPerformOutputOperation;
- (void)adjustTextPositionByCharacterOffset:(long long)a0;
- (void)dealloc;

@end
