@interface _UIFocusSpeedBumpRegion : _UIFocusRegion

@property (nonatomic) unsigned long long speedBumpEdges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_canBeOccludedByRegionsAbove;
- (BOOL)_canOccludeRegionsBelow;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 speedBumpEdges:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
