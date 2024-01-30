@class UIView, NSString, UIScrollView, UITextView, _UIBackdropView, NSLayoutConstraint, UILabel, SUICOrbView;
@protocol VTUIEnrollmentDelegate;

@interface VTUIEnrollmentBaseView : UIView <UITextViewDelegate, SUICOrbViewControlling> {
    SUICOrbView *_orbView;
    UIView *_scrollContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_instructionLabel;
    UIView *_contentView;
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

- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (id)backdropView;
- (void)setSubtitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (id)footerView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (long long)_backdropStyle;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)setTitle:(id)a0;
- (void)dealloc;
- (void)_setupUI;
- (void)setContentView:(id)a0;
- (void)animateOrbViewToOffWithCompletion:(id /* block */)a0;
- (void)setInputPowerLevel:(float)a0;
- (void)setOutputPowerLevel:(float)a0;
- (void)fadeInSubviews;
- (void)setInstructionText:(id)a0;
- (BOOL)showPrivacyTextView;
- (id)_createPrivacyTextView;

@end
