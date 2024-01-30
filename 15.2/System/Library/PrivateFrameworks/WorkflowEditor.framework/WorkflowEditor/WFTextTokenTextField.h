@class UIFont, NSString, WFVariableInputCoordinator, NSSet, UIColor, NSAttributedString;
@protocol WFVariableProvider, WFVariableInsertionFieldDelegate, WFVariableUIDelegate;

@interface WFTextTokenTextField : UITextField <WFTextField>

@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (weak, nonatomic) id<WFVariableInsertionFieldDelegate> variableInsertionDelegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (copy, nonatomic) NSString *customButtonTitle;
@property (copy, nonatomic) id /* block */ variableBlock;
@property (copy, nonatomic) id /* block */ customButtonBlock;
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

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)paste:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cut:(id)a0;
- (void)copy:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelectedTextRange:(id)a0;
- (void)setReturnKeyType:(long long)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)tintColorDidChange;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)updateAllowedVariableTypes;
- (void)updateDoneButtonPresence;
- (BOOL)shouldChangeCharactersWithNonbreakingSpacesIfNecessaryInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
- (id)textWithRegularSpaces;
- (void)updateVariableBlock;
- (BOOL)usesNonbreakingSpaces;
- (void)convertNonbreakingSpacesInClipboardIfNecessary;

@end
