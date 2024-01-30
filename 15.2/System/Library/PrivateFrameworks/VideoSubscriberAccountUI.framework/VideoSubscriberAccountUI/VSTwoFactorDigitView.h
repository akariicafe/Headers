@class NSArray, NSString, UITextInputPasswordRules;
@protocol VSTwoFactorDigitViewDelegate;

@interface VSTwoFactorDigitView : UIControl <UIKeyInput, UITextInputTraits>

@property (retain, nonatomic) NSArray *digits;
@property (weak, nonatomic) id<VSTwoFactorDigitViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long digitCount;
@property (retain, nonatomic) NSString *text;
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

- (void)deleteBackward;
- (void)insertText:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)onTouchUpInside:(id)a0;
- (id)initWithDigitCount:(unsigned long long)a0;
- (void)setupDigitViews;

@end
