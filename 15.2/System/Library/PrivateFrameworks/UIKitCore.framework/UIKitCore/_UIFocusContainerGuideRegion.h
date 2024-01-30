@protocol _UIFocusRegionContainer;

@interface _UIFocusContainerGuideRegion : _UIFocusGuideRegion

@property (weak, nonatomic) id<_UIFocusRegionContainer> contentFocusRegionContainer;

- (unsigned long long)_focusableBoundaries;
- (id)_visualRepresentationColor;
- (id)_fallbackFocusItemForMovementRequest:(id)a0 inFocusMap:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)a0;
- (void)_drawDebugQuickLookImageWithInfo:(id)a0 inContext:(struct CGContext { } *)a1;

@end
