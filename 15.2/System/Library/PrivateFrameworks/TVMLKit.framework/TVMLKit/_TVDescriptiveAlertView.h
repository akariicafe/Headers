@class UIImageView, NSArray, NSString, UIImage, UIView, UIScrollView, _UIRepeatingPressGestureRecognizer;

@interface _TVDescriptiveAlertView : UIView <UIScrollViewDelegate> {
    UIScrollView *_scrollView;
    NSArray *_viewsAboveScrollView;
    NSArray *_viewsBelowScrollView;
    BOOL _isCenteredLayout;
    _UIRepeatingPressGestureRecognizer *_upButtonGesture;
    _UIRepeatingPressGestureRecognizer *_downButtonGesture;
    BOOL _waiting;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
}

@property (retain, nonatomic) NSArray *childViews;
@property (retain, nonatomic) UIView *defaultFocusView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupGestureRecognizers;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (void)_scrollUp:(id)a0;
- (void)_scrollDown:(id)a0;
- (void)setBgImage:(id)a0;
- (void)_scrollUp;
- (void)_scrollInDirection:(double)a0;
- (void)_scrollDown;

@end
