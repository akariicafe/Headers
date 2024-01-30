@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {
    UIKBBackgroundView *_backgroundView;
    UIKBTree *_keyplane;
}

+ (id)activeInstance;
+ (struct CGSize { double x0; double x1; })keyboardSizeForInputMode:(id)a0 screenTraits:(id)a1 keyboardType:(long long)a2;
+ (BOOL)keyboardInputMode:(id)a0 supportsResizingOffsetForScreenTraits:(id)a1;

- (void)layoutSubviews;
- (BOOL)shouldFadeToLayout;
- (void)setupBackgroundViewForNewSplitTraits:(id)a0;
- (BOOL)usesAutoShift;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_clipCornersOfView:(id)a0;
- (void)showKeyboardWithInputTraits:(id)a0 screenTraits:(id)a1 splitTraits:(id)a2;
- (void)_moveWithEvent:(id)a0;
- (void)setRenderConfig:(id)a0;
- (struct CGSize { double x0; double x1; })splitLeftSize;
- (id)currentKeyplane;
- (BOOL)visible;
- (BOOL)shouldFadeFromLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dragGestureRectInView:(id)a0;

@end
