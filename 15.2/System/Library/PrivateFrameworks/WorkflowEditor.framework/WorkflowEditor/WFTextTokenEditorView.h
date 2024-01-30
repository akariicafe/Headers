@class UIFont, NSString, WFVariableString, UIView, NSSet, WFTextTokenTextField, NSAttributedString, WFTextScrollView, UIColor;
@protocol WFVariableProvider, WFTextTokenEditorViewDelegate, WFVariableUIDelegate, WFTextTokenFieldImpl;

@interface WFTextTokenEditorView : UIView <UITextFieldDelegate, UITextViewDelegate, WFVariableInsertionFieldDelegate, WFTextTokenField> {
    BOOL _switching;
}

@property (retain, nonatomic) WFTextTokenTextField *textField;
@property (retain, nonatomic) WFTextScrollView *scrollView;
@property (weak, nonatomic) id<WFTextTokenEditorViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) WFVariableString *variableString;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long syntaxHighlightingType;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) unsigned long long variableResultType;
@property (nonatomic) BOOL variablesDisabled;
@property (readonly, nonatomic) UIView<WFTextTokenFieldImpl> *currentField;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ revealBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) UIColor *backgroundColor;

- (void)layoutSubviews;
- (void)paste:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)resignFirstResponder;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)textDidChange;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)currentView;
- (void)beginEditingWithContext:(id)a0;
- (void)selectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertVariable:(id)a0;
- (BOOL)usesTextView;
- (void)setUsesTextView:(BOOL)a0;
- (void)removeTextChangeObserver;

@end
