@class NSArray;

@interface NTKZeusComplicationBackgroundView : NTKZeudleComplicationBackgroundView {
    NSArray *_cornerLayers;
}

- (id)init;
- (void).cxx_destruct;
- (void)_updateCorners;
- (void)layoutSubviews;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)applyStyleChange;
- (id)_cornerImage;

@end
