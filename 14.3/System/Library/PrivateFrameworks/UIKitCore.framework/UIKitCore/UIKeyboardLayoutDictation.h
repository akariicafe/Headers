@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {
    UIKBBackgroundView *_backgroundView;
    UIKBTree *_keyplane;
}

+ (id)activeInstance;
+ (BOOL)keyboardInputMode:(id)a0 supportsResizingOffsetForScreenTraits:(id)a1;
+ (struct CGSize { double x0; double x1; })keyboardSizeForInputMode:(id)a0 screenTraits:(id)a1 keyboardType:(long long)a2;

- (struct CGSize { double x0; double x1; })splitLeftSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dragGestureRectInView:(id)a0;
- (BOOL)visible;
- (void)setRenderConfig:(id)a0;
- (BOOL)usesAutoShift;
- (unsigned long long)_clipCornersOfView:(id)a0;
- (void)setupBackgroundViewForNewSplitTraits:(id)a0;
- (void)layoutSubviews;
- (BOOL)shouldFadeFromLayout;
- (void)showKeyboardWithInputTraits:(id)a0 screenTraits:(id)a1 splitTraits:(id)a2;
- (void)_moveWithEvent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)currentKeyplane;
- (BOOL)shouldFadeToLayout;

@end
