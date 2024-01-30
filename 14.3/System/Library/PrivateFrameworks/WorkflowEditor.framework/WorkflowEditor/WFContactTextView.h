@class UIFont, NSSet, WFVariableInputCoordinator, NSString, UIColor, NSAttributedString;
@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFContactTextView : UITextView <WFTextField>

@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (copy, nonatomic) id /* block */ variableBlock;
@property (nonatomic) BOOL allowsTextEntry;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
@property (nonatomic) BOOL variablesDisabled;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSString *textContentType;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) unsigned long long syntaxHighlightingType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cut:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)paste:(id)a0;
- (void)setReturnKeyType:(long long)a0;
- (BOOL)resignFirstResponder;
- (void)copy:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)textDidChange:(id)a0;
- (void)updateTextAttachments;
- (void)updateTextContainerInsets;
- (void)updateAllowedVariableTypes;
- (void)updateDoneButtonPresence;
- (id)attributesByAddingTintColorToAttributes:(id)a0;
- (id)attributesForPasting;
- (void)pasteAttributedString:(id)a0;

@end
