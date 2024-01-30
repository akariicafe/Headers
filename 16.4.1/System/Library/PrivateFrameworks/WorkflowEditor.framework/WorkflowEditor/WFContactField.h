@class NSString, NSArray, WFContactPickerCoordinator, NSSet, UITextView, UIButton, WFContactTextView, WFTextScrollView;
@protocol WFContactFieldDelegate;

@interface WFContactField : UIView <UITextViewDelegate>

@property (weak, nonatomic) WFContactTextView *textView;
@property (weak, nonatomic) WFTextScrollView *scrollView;
@property (weak, nonatomic) UIButton *plusButton;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) BOOL shouldEndEditing;
@property (retain, nonatomic) WFContactPickerCoordinator *contactPicker;
@property (weak, nonatomic) id<WFContactFieldDelegate> delegate;
@property (copy, nonatomic) NSArray *entries;
@property (readonly, weak, nonatomic) UITextView *textInputView;
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
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)typingAttributes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)selectContact;
- (id)containingViewController;
- (void)chooseMultivalueIndexIfNecessaryForContact:(id)a0 sender:(id)a1;
- (void)deleteFreeText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 newValue:(id)a2;
- (void)insertContact:(id)a0;
- (unsigned long long)numberOfValuesForProperties:(id)a0 inContact:(id)a1;
- (void)presentContactSelectionActionSheetForText:(id)a0 attributedText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)showContactPicker;
- (BOOL)text:(id)a0 containsMatchesForProperties:(id)a1;
- (BOOL)text:(id)a0 containsMatchesForProperty:(int)a1;
- (void)tokenizeFreeText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 newValue:(id)a2;
- (long long)tokenizeFreeTextFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 freeTextModificationBlock:(id /* block */ *)a1;
- (void)updateContactsFromTextField:(BOOL)a0;
- (void)updateEditableState;

@end
