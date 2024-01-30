@interface TSWPFloatingCommentRep : TSWPShapeRep

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)documentRoot;
- (BOOL)forcesPlacementOnTop;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)modelIsReadOnly;
- (BOOL)p_shouldDraw;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { } *)a0 keepingChildrenPassingTest:(id /* block */)a1;

@end
