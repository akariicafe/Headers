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
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)_canBecomeFirstResponder;
- (BOOL)endEditing:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)layoutManager:(id)a0 didCompleteLayoutForTextContainer:(id)a1 atEnd:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)_configureNotifyGlyphs;
- (void)_showNotifyButtonIfNeeded;
- (id)_textContainerExclusionPathsWithNotifyButton:(BOOL)a0;
- (void)_textInputDidChange:(id)a0;
- (void)_updateExclusionPathsIfNeeded;
- (void)_updateTextContainerInsets;
- (void)displayMetricsDidChange;
- (BOOL)isEndEditingText:(id)a0;
- (void)refreshPreferredContentSize;
- (void)setNeedsExclusionPathUpdate;

@end
