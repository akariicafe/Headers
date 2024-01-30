@interface ODICycle5 : ODICycle

+ (void)addShapeForNode:(id)a0 relativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 state:(id)a2;
+ (void)addShapeForTransition:(id)a0 startAngle:(float)a1 endAngle:(float)a2 state:(id)a3;
+ (float)intersectionAngleNextToAngle:(float)a0 isAfter:(BOOL)a1 state:(id)a2;
+ (BOOL)map1NodeWithState:(id)a0;
+ (BOOL)map2NodeWithState:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mapGSpaceWithState:(id)a0;
+ (void)mapNode:(id)a0 index:(unsigned int)a1 state:(id)a2;
+ (void)mapStyleForTransition:(id)a0 shape:(id)a1 state:(id)a2;
+ (void)mapTransition:(id)a0 index:(unsigned int)a1 state:(id)a2;
+ (struct CGSize { double x0; double x1; })nodeSizeWithState:(id)a0;
+ (float)normalizedAngle:(float)a0;

@end
