@protocol _UIFocusRegionContainer;

@interface _UIFocusPromiseRegion : _UIFocusRegion {
    id<_UIFocusRegionContainer> _contentFocusRegionContainer;
}

@property (copy, nonatomic) id /* block */ contentFulfillmentHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_visualRepresentationColor;
- (unsigned long long)_focusableBoundaries;
- (long long)_visualRepresentationPatternType;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1;
- (BOOL)_shouldCropRegionToSearchArea;
- (id)_loadContentFocusRegionContainer;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)a0;
- (void)_drawDebugQuickLookImageWithInfo:(id)a0 inContext:(struct CGContext { } *)a1;

@end
