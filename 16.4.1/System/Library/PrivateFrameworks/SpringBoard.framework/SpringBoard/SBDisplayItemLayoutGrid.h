@class NSString, NSMutableDictionary;

@interface SBDisplayItemLayoutGrid : NSObject <BSDescriptionProviding> {
    NSMutableDictionary *_gridCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)_gridForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentOrientation:(long long)a1 layoutRestrictionInfo:(id)a2 screenScale:(double)a3 chamoisLayoutAttributes:(id)a4;
- (id)allGridHeightsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentOrientation:(long long)a1 layoutRestrictionInfo:(id)a2 screenScale:(double)a3 chamoisLayoutAttributes:(id)a4;
- (id)allGridWidthsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentOrientation:(long long)a1 layoutRestrictionInfo:(id)a2 screenScale:(double)a3 chamoisLayoutAttributes:(id)a4;
- (void)clearCachedGrids;
- (struct CGSize { double x0; double x1; })gridSizeAtIndexFromFullWidth:(unsigned long long)a0 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentOrientation:(long long)a2 layoutRestrictionInfo:(id)a3 screenScale:(double)a4 chamoisLayoutAttributes:(id)a5;
- (struct CGSize { double x0; double x1; })maxGridSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentOrientation:(long long)a1 layoutRestrictionInfo:(id)a2 screenScale:(double)a3 chamoisLayoutAttributes:(id)a4;
- (struct CGSize { double x0; double x1; })minGridSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentOrientation:(long long)a1 layoutRestrictionInfo:(id)a2 screenScale:(double)a3 chamoisLayoutAttributes:(id)a4;
- (struct CGSize { double x0; double x1; })nearestGridSizeForProposedSize:(struct CGSize { double x0; double x1; })a0 countOnStage:(unsigned long long)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 contentOrientation:(long long)a3 layoutRestrictionInfo:(id)a4 screenScale:(double)a5 chamoisLayoutAttributes:(id)a6;

@end
