@class NSMutableDictionary;

@interface _NTKPolygonCylinderTransformView : UIView {
    double _interiorAngle;
    double _exteriorAngle;
    NSMutableDictionary *_faceViews;
}

@property (readonly, nonatomic) unsigned long long numberOfFaces;
@property (readonly, nonatomic) unsigned long long numberOfVisibleFaces;
@property (readonly, nonatomic) double faceDistanceToCenter;
@property (readonly, nonatomic) double rotationAnglePerFace;

+ (Class)layerClass;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithNumberOfFaces:(unsigned long long)a0;
- (void)setView:(id)a0 forFaceAtIndex:(unsigned long long)a1;
- (id)viewForFaceAtIndex:(unsigned long long)a0;
- (void)enumerateFaceViewsWithBlock:(id /* block */)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForFaceIndex:(unsigned long long)a0;

@end
