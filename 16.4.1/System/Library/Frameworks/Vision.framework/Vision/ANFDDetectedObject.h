@interface ANFDDetectedObject : VNEspressoDetectedObject

@property float rotationAngle;
@property float yawAngle;
@property float pitchAngle;
@property int labelKey;

- (id)description;
- (id)initWithObjectType:(long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 rotationAngle:(float)a3 yawAngle:(float)a4 pitchAngle:(float)a5 labelKey:(int)a6;

@end
