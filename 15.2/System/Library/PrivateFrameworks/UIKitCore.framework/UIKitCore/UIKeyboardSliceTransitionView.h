@class CALayer, NSMutableDictionary, UIKBCacheToken;

@interface UIKeyboardSliceTransitionView : UIKeyboardSplitTransitionView {
    struct CGImage { } *_defaultKeyplaneImage;
    struct CGImage { } *_splitKeyplaneImage;
    CALayer *_leftKeys;
    CALayer *_rightKeys;
    CALayer *_spaceFill;
    NSMutableDictionary *_controlKeys;
    CALayer *_topEdgeHighlight;
    UIKBCacheToken *_keyplaneToken;
    long long _orientation;
    struct { unsigned char position : 1; unsigned char slices : 1; unsigned char backgroundAndShadows : 1; unsigned char backgroundGradients : 1; unsigned char topEdgeHighlight : 1; unsigned char shiftKeys : 1; unsigned char returnKeys : 1; unsigned char moreIntlKeys : 1; } _rebuildFlags;
}

- (void)updateTransitionForSlice:(id)a0 withStart:(id)a1 startContents:(id)a2 end:(id)a3 endContents:(id)a4 updateContents:(BOOL)a5;
- (void)rebuildFromKeyplane:(id)a0 toKeyplane:(id)a1 startToken:(id)a2 endToken:(id)a3 keyboardType:(long long)a4 orientation:(long long)a5;
- (void)updateWithProgress:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rebuildTransitionForSplitStyleChange:(id)a0;
- (void)transformForProgress:(double)a0;
- (struct CGImage { } *)defaultKeyboardImage;
- (struct CGImage { } *)splitKeyboardImage;
- (void)initializeLayers;
- (void)rebuildMoreIntlKeys;
- (void)rebuildShiftSlices;
- (void)rebuildReturnSlices;
- (void)updateTransition;
- (void)_delayedUpdateTransition;
- (void)setRebuildFlags;
- (void)rebuildShadows;
- (id)crossfadeOpacityAnimation;
- (double)adjustedLeftWidthAtMergePoint;
- (double)adjustedRightWidthAtMergePoint;
- (void)rebuildTopEdgeHighlightTransition;
- (struct CGImage { } *)getKeyboardImageAsSplit:(BOOL)a0;
- (id)meshTransformForProgress:(double)a0;
- (void)refreshKeyplaneImages;
- (void)rebuildSliceTransitions;
- (void)rebuildBackgroundAndShadowTransitions;
- (void)rebuildBackgroundGradientTransitions;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (void)rebuildControlKeys:(unsigned long long)a0;
- (BOOL)canDisplayTransition;

@end
