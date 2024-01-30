@class CALayer, UIKBCacheToken, NSMutableDictionary;

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView {
    CALayer *_container;
    CALayer *_frontFace;
    CALayer *_backFace;
    CALayer *_frontDarkening;
    CALayer *_backDarkening;
    CALayer *_backDarkeningLeft;
    CALayer *_backDarkeningRight;
    UIKBCacheToken *_startKeyplaneToken;
    UIKBCacheToken *_endKeyplaneToken;
    NSMutableDictionary *_controlKeys;
    struct { unsigned char shiftKeys : 1; unsigned char returnKeys : 1; unsigned char moreIntlKeys : 1; } _rebuildFlags;
}

@property (nonatomic, getter=isShowingFrontFace) BOOL showingFrontFace;

- (void)rebuildFromKeyplane:(id)a0 toKeyplane:(id)a1 startToken:(id)a2 endToken:(id)a3 keyboardType:(long long)a4 orientation:(long long)a5;
- (void)dealloc;
- (void)rebuildTransitionForSplitStyleChange:(id)a0;
- (BOOL)transitionIsVisible;
- (struct CGImage { } *)defaultKeyboardImage;
- (struct CGImage { } *)splitKeyboardImage;
- (void)rebuildTransition;
- (void)rebuildShiftSlices;
- (void)rebuildMoreIntlKeys;
- (void)_flipToFront:(BOOL)a0 animated:(BOOL)a1;
- (void)rebuildControlSlicesForKeyName:(id)a0;
- (void)updateMoreIntlKey:(id)a0 asStart:(BOOL)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 showIntl:(BOOL)a3 showDictKey:(BOOL)a4;
- (void)rebuildReturnSlices;
- (void)updateTransition;
- (void)rebuildBackgroundTransition;
- (void)_delayedUpdateTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rebuildControlKeys:(unsigned long long)a0;

@end
