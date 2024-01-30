@class WFTagTextView, NSString, NSSet, WFTextScrollView, UIButton;
@protocol WFVariableProvider, WFTagFieldSuggestionsProvider, WFVariableUIDelegate, WFTagFieldDelegate;

@interface WFTagField : UIView <UITextViewDelegate, WFTagPickerViewControllerDelegate>

@property (weak, nonatomic) WFTagTextView *textView;
@property (weak, nonatomic) WFTextScrollView *scrollView;
@property (weak, nonatomic) UIButton *plusButton;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (copy, nonatomic) NSString *tags;
@property (copy, nonatomic) NSString *fieldTitle;
@property (weak, nonatomic) id<WFTagFieldDelegate> delegate;
@property (weak, nonatomic) id<WFTagFieldSuggestionsProvider> suggestionsProvider;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) BOOL allowsTextEntry;
@property (nonatomic, getter=isEditable) BOOL editable;
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

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)selectTag;
- (void)updateTags;
- (void)tagPicker:(id)a0 didSelectTags:(id)a1;
- (void)tagPickerDidCancel:(id)a0;
- (void)updateEditableState;
- (BOOL)tokenizeFreeTextFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)containingViewController;
- (void)insertTag:(id)a0;

@end
