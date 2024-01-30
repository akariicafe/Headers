@class UIView, NSString, UITextInputPasswordRules, WFVariableConfigurationAccessoryView, WFVariable, WFVariableConfigurationView;
@protocol WFVariableConfigurationResponderDelegate;

@interface WFVariableConfigurationResponder : UIResponder <WFVariableConfigurationAccessoryViewDelegate, WFVariableConfigurationViewControllerDelegate, WFVariableDelegate, UIKeyInput>

@property (readonly, nonatomic) WFVariableConfigurationAccessoryView *accessoryView;
@property (readonly, nonatomic) WFVariableConfigurationView *configurationView;
@property (weak, nonatomic) id<WFVariableConfigurationResponderDelegate> delegate;
@property (nonatomic) BOOL showsAccessoryActions;
@property (nonatomic) unsigned long long exitAccessory;
@property (nonatomic) unsigned long long resultType;
@property (readonly, nonatomic) WFVariable *variable;
@property (weak, nonatomic) UIView *nextResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

- (id)inputAccessoryView;
- (void)deleteBackward;
- (void)insertText:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)inputView;
- (id)initWithVariable:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)updateAccessoryView;
- (void)variableDidChange:(id)a0;
- (void)configurationViewController:(id)a0 didUpdateVariable:(id)a1;
- (void)configurationViewController:(id)a0 presentPromptWithTitle:(id)a1 message:(id)a2 fieldConfigurationHandler:(id /* block */)a3 commitHandler:(id /* block */)a4;
- (void)accessoryViewDidDismiss:(id)a0;
- (void)accessoryViewDidDelete:(id)a0;
- (void)accessoryViewDidRename:(id)a0;
- (void)accessoryViewDidRevealAction:(id)a0;
- (void)accessoryViewDidReturnToKeyboard:(id)a0;

@end
