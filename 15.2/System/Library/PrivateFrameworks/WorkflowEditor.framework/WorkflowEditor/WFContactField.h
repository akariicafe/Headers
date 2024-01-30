@class NSSet, NSArray, WFContactTextView, NSString, WFTextScrollView, WFContactPickerCoordinator, UIButton;
@protocol WFVariableProvider, WFVariableUIDelegate, WFContactFieldDelegate;

@interface WFContactField : UIView <UITextViewDelegate>

@property (weak, nonatomic) WFContactTextView *textView;
@property (weak, nonatomic) WFTextScrollView *scrollView;
@property (weak, nonatomic) UIButton *plusButton;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) BOOL shouldEndEditing;
@property (retain, nonatomic) WFContactPickerCoordinator *contactPicker;
@property (weak, nonatomic) id<WFContactFieldDelegate> delegate;
@property (copy, nonatomic) NSArray *entries;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) BOOL allowsTextEntry;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) BOOL variablesDisabled;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ variableBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)typingAttributes;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)a0;
- (void)tintColorDidChange;
- (void)selectContact;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)updateEditableState;
- (id)containingViewController;
- (void)updateContactsFromTextField:(BOOL)a0;
- (void)showContactPicker;
- (void)insertContact:(id)a0;
- (long long)tokenizeFreeTextFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 freeTextModificationBlock:(id /* block */ *)a1;
- (void)deleteFreeText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 newValue:(id)a2;
- (void)tokenizeFreeText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 newValue:(id)a2;
- (void)presentContactSelectionActionSheetForText:(id)a0 attributedText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)chooseMultivalueIndexIfNecessaryForContact:(id)a0 sender:(id)a1;
- (BOOL)text:(id)a0 containsMatchesForProperty:(int)a1;
- (BOOL)text:(id)a0 containsMatchesForProperties:(id)a1;
- (unsigned long long)numberOfValuesForProperties:(id)a0 inContact:(id)a1;

@end
