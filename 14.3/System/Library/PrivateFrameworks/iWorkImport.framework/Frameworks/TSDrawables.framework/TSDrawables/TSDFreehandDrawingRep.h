@class NSString, NSCache;

@interface TSDFreehandDrawingRep : TSDGroupRep <TSDPlayableRep> {
    NSCache *_cachedClusteredShapeRepsForAnimationExport;
}

@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (double)opacity;
- (void)willBeRemoved;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (id)textureForDescription:(id)a0;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;
- (id)p_shapeChildrenForDrawingRecursively;
- (BOOL)p_shouldDrawShapeRep:(id)a0 withOtherShapeRep:(id)a1;
- (void)p_drawChildShapeReps:(id)a0 togetherInContext:(struct CGContext { } *)a1;
- (id)p_childrenToExcludeFromFlattenedDrawing;
- (id)p_freehandDrawingLayout;
- (id)p_freehandDrawingInfo;
- (id)tsaxChildren;
- (BOOL)tsaxAllowedToEditChildren;

@end
