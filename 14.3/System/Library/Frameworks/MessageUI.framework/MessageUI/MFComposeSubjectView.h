@class MFConfirmationButton, UITextView, NSString;
@protocol MFComposeSubjectViewDelegate;

@interface MFComposeSubjectView : MFMailComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate> {
    unsigned char _delegateRespondsToTextChange : 1;
    unsigned char _delegateRespondsToWillRemoveContent : 1;
    BOOL _needsExclusionPathUpdate;
}

@property (readonly, nonatomic) MFConfirmationButton *notifyButton;
@property (readonly, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;
@property (nonatomic, getter=isNotifyOptionSelected) BOOL notifyOptionSelected;
@property (nonatomic) BOOL allowsNotifyOption;
@property (weak, nonatomic) id<MFComposeSubjectViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_canBecomeFirstResponder;
- (void)layoutManager:(id)a0 didCompleteLayoutForTextContainer:(id)a1 atEnd:(BOOL)a2;
- (void)_updateTextContainerInsets;
- (void)_textInputDidChange:(id)a0;
- (void)_configureNotifyGlyphs;
- (void)layoutSubviews;
- (BOOL)endEditing:(BOOL)a0;
- (id)_textContainerExclusionPathsWithNotifyButton:(BOOL)a0;
- (void)_showNotifyButtonIfNeeded;
- (void)setNeedsExclusionPathUpdate;
- (void)_updateExclusionPathsIfNeeded;
- (void)displayMetricsDidChange;
- (BOOL)isEndEditingText:(id)a0;
- (void)refreshPreferredContentSize;
- (void)textViewDidBeginEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
