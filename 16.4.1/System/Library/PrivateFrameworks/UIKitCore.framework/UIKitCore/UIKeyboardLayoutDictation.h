@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {
    UIKBBackgroundView *_backgroundView;
    UIKBTree *_keyplane;
}

+ (id)activeInstance;
+ (struct CGSize { double x0; double x1; })keyboardSizeForInputMode:(id)a0 screenTraits:(id)a1 keyboardType:(long long)a2;
+ (BOOL)keyboardInputMode:(id)a0 supportsResizingOffsetForScreenTraits:(id)a1;

- (void)setRenderConfig:(id)a0;
- (unsigned long long)_clipCornersOfView:(id)a0;
- (void)showKeyboardWithInputTraits:(id)a0 screenTraits:(id)a1 splitTraits:(id)a2;
- (BOOL)visible;
- (BOOL)usesAutoShift;
- (void)_moveWithEvent:(id)a0;
- (BOOL)shouldFadeFromLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dragGestureRectInView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldFadeToLayout;
- (id)currentKeyplane;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupBackgroundViewForNewSplitTraits:(id)a0;
- (struct CGSize { double x0; double x1; })splitLeftSize;

@end
