@class SKSpriteNode, NTKCollectionNode;

@interface NTKVariantNode : SKCropNode {
    SKSpriteNode *_transitionMask;
}

@property (readonly, nonatomic) NTKCollectionNode *ticks;
@property (readonly, nonatomic) NTKCollectionNode *labels;
@property (readonly, nonatomic) NTKCollectionNode *other;

- (void).cxx_destruct;
- (void)applyAppearanceFraction:(double)a0;
- (void)applyAppearanceFraction:(double)a0 inverted:(BOOL)a1;
- (void)applyFullAppearance;
- (void)appearAnimated;
- (void)disappearAnimated;
- (id)initWithElements:(id)a0;
- (void)resetAlphaAndScale;
- (void)_stopMasking;
- (void)createTransitionMaskLazily;
- (void)revealWithFraction:(double)a0 invert:(BOOL)a1;

@end
