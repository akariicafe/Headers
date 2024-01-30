@class UIView, NSString, UIScrollView, UITextView, _UIBackdropView, NSLayoutConstraint, UILabel, SUICOrbView;
@protocol VTUIEnrollmentDelegate;

@interface VTUIEnrollmentBaseView : UIView <UITextViewDelegate> {
    SUICOrbView *_orbView;
    UIView *_scrollContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_instructionLabel;
    UITextView *_privacyTextView;
    UIScrollView *_scrollView;
    _UIBackdropView *_backdropView;
    NSLayoutConstraint *_readableLeftAnchorConstraint;
    NSLayoutConstraint *_readableRightAnchorConstraint;
}

@property (weak, nonatomic) id<VTUIEnrollmentDelegate> enrollmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)safeAreaInsetsDidChange;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (id)footerView;
- (void)dealloc;
- (void)updateConstraints;
- (void)_setupUI;
- (void)setSubtitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (long long)_backdropStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)fadeInSubviews;
- (void)setInstructionText:(id)a0;
- (BOOL)showPrivacyTextView;
- (id)_createPrivacyTextView;

@end
