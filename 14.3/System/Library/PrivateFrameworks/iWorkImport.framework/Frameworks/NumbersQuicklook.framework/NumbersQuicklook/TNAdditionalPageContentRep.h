@interface TNAdditionalPageContentRep : TNPageContentRep

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (unsigned long long)pageIndex;
- (void)willBeRemoved;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)masksToBounds;
- (BOOL)directlyManagesLayerContent;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)forcesPlacementOnTop;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;

@end
