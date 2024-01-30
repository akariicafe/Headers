@class UIScrollView, UIView;

@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer {
    BOOL _hasBeenModified;
    UIView *_originalView;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) long long activePressType;

- (void)setAllowedTouchTypes:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_shouldReceivePress:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setAllowedPressTypes:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)_addToViewIfAllowed:(id)a0;
- (void)_resetToOriginalViewIfAllowed;
- (void)_setEnabledIfAllowed:(BOOL)a0;

@end
