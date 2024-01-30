@protocol _UIFocusRegionContainer;

@interface _UIFocusPromiseRegion : _UIFocusRegion {
    id<_UIFocusRegionContainer> _contentFocusRegionContainer;
}

@property (copy, nonatomic) id /* block */ contentFulfillmentHandler;

- (unsigned long long)_focusableBoundaries;
- (id)_visualRepresentationColor;
- (long long)_visualRepresentationPatternType;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1;
- (id)_loadContentFocusRegionContainer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)a0;
- (void)_drawDebugQuickLookImageWithInfo:(id)a0 inContext:(struct CGContext { } *)a1;

@end
