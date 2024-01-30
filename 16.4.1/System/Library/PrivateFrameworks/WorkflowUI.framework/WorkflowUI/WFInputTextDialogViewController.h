@class UITextView, NSString, UITextField, NSDateFormatter, UILabel, NSLayoutConstraint, UIButton;

@interface WFInputTextDialogViewController : WFCompactDialogViewController <UITextFieldDelegate, UITextViewDelegate>

@property (weak, nonatomic) UITextField *textField;
@property (weak, nonatomic) UITextView *textView;
@property (weak, nonatomic) UIButton *clearButton;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL focusImmediatelyOnAppear;
@property (nonatomic) long long initialInsertionIndex;
@property (weak, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (copy, nonatomic) NSString *localizedIncompleteHintString;
@property (retain, nonatomic) NSLayoutConstraint *adjustableTextFieldBottomAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)clearText;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)textViewDidBeginEditing:(id)a0;
- (void)finishEditing;
- (void)textFieldDidChange:(id)a0;
- (BOOL)allowsDecimalNumbers;
- (BOOL)shouldInstallBannerDimmingLayer;
- (BOOL)actingAsNumberField;
- (BOOL)allowsInteractiveDismiss;
- (void)finishWithInputtedText;
- (void)negateText;
- (void)updateClearButtonVisibility;
- (void)updateDateFormattingHint;
- (void)updateTextViewPlaceholder;
- (BOOL)useNumberValidation;

@end
