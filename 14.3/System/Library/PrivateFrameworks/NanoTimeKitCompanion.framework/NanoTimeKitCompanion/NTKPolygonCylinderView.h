@class NSString, _NTKPolygonCylinderTransformView;

@interface NTKPolygonCylinderView : UIView <NTKEditOptionContainerView> {
    _NTKPolygonCylinderTransformView *_transformView;
    double _rotationAngle;
}

@property (nonatomic) unsigned long long numberOfSides;
@property (readonly, nonatomic) unsigned long long numberOfVisibleSides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateTransform;
- (void)layoutSubviews;
- (void)enumerateSideViewsWithBlock:(id /* block */)a0;
- (void)setView:(id)a0 forSideAtIndex:(unsigned long long)a1;
- (void)transitionToSideAtIndex:(unsigned long long)a0;
- (id)viewForSideAtIndex:(unsigned long long)a0;
- (void)transitionToFraction:(double)a0 fromSideAtIndex:(unsigned long long)a1 toSideAtIndex:(unsigned long long)a2;
- (void)_setRotationAngle:(double)a0;
- (double)_rotationAngleForFaceIndex:(long long)a0;
- (void)_informFaceViewsOfRotation;

@end
