@interface TNAdditionalPageContentRep : TNPageContentRep

- (unsigned long long)pageIndex;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)willBeRemoved;
- (BOOL)masksToBounds;
- (BOOL)directlyManagesLayerContent;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)forcesPlacementOnTop;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;

@end
