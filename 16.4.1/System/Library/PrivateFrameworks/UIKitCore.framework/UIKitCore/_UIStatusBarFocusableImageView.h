@class UIColor;

@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView {
    UIColor *_unfocusedTintColor;
}

@property (retain, nonatomic) UIColor *focusedImageTintColor;

- (BOOL)isUserInteractionEnabled;
- (void)applyStyleAttributes:(id)a0;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;

@end
