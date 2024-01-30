@class UIColor;

@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView {
    UIColor *_unfocusedTintColor;
}

@property (retain, nonatomic) UIColor *focusedImageTintColor;

- (BOOL)isUserInteractionEnabled;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)applyStyleAttributes:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
