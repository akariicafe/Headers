@interface AXANFDDetectedObject : AXVNEspressoDetectedObject

@property float rotationAngle;
@property float yawAngle;
@property int labelKey;

- (id)initWithObjectType:(long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 rotationAngle:(float)a3 yawAngle:(float)a4 labelKey:(int)a5;

@end
