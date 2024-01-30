@class UITapGestureRecognizer, NSString, UITextInputPasswordRules, NSMutableString, NSArray, PKOneTimeCodeDigitFieldView, PKIconTextLabel;
@protocol PKOneTimeCodeViewDelegate;

@interface PKOneTimeCodeView : UIView <UIKeyInput> {
    id<PKOneTimeCodeViewDelegate> _delegate;
    NSMutableString *_value;
    NSArray *_codeFields;
    PKOneTimeCodeDigitFieldView *_templateField;
    PKIconTextLabel *_entryErrorLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSArray *_constraints;
}

@property (readonly, nonatomic) double codeLength;
@property (nonatomic) double entrySpacing;
@property (nonatomic) BOOL disableEntry;
@property (nonatomic) unsigned long long entryError;
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

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)insertText:(id)a0;
- (id)viewForLastBaselineLayout;
- (void)setBackgroundColor:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (void)deleteBackward;
- (void)_updateLabels;
- (void).cxx_destruct;
- (void)_passcodeFieldTapped:(id)a0;
- (id)_firstCodeField;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)clearCurrentCode;
- (id)currentCode;
- (id)initWithCodeLength:(long long)a0 delegate:(id)a1;

@end
