@class UITapGestureRecognizer, NSString, PRXCardBackgroundView, UIView, PRXPullDismissalScrollView, NSLayoutConstraint;
@protocol PRXCardContainerViewDelegate;

@interface PRXCardContainerView : UIView <UIGestureRecognizerDelegate> {
    NSLayoutConstraint *_scrollViewBottomConstraint;
    NSLayoutConstraint *_visibleHeightConstraint;
    NSLayoutConstraint *_contentWidthConstraint;
    NSLayoutConstraint *_contentHeightConstraint;
    NSLayoutConstraint *_contentTopConstraint;
    NSLayoutConstraint *_scrollViewHeightConstraint;
    NSLayoutConstraint *_scrollViewTopConstraint;
    UITapGestureRecognizer *_tapRecognizer;
    double _keyboardHeight;
    BOOL _shouldDismissKeyboardOnTap;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _containerLayoutMargins;
}

@property (nonatomic) BOOL defersKeyboardUpdates;
@property (readonly, nonatomic) UIView *contentContainerView;
@property (readonly, nonatomic) PRXCardBackgroundView *backgroundView;
@property (readonly, nonatomic) PRXPullDismissalScrollView *pullDismissalScrollView;
@property (weak, nonatomic) id<PRXCardContainerViewDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) BOOL usePortraitTopInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)tappedView:(id)a0;
- (void)_updateKeyboardDeferred:(BOOL)a0;

@end
