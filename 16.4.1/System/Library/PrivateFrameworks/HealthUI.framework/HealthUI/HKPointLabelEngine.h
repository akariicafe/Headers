@interface HKPointLabelEngine : NSObject

@property (nonatomic) long long state;
@property (nonatomic) struct CGPoint { double x; double y; } previousTransformedPoint;
@property (nonatomic) struct CGPoint { double x; double y; } previousUntransformedPoint;
@property (nonatomic) struct CGPoint { double x; double y; } currentTransformedPoint;
@property (nonatomic) struct CGPoint { double x; double y; } currentUntransformedPoint;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transformedRect; double labelValue; long long options; } previousRenderingData;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transformedRect; double labelValue; long long options; } currentRenderingData;
@property (nonatomic) BOOL lastRenderOverlapped;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRegion;
@property (nonatomic) BOOL isLabelShiftingEnabled;
@property (readonly, copy, nonatomic) id /* block */ sizeForValue;

- (void).cxx_destruct;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; long long x2; })_computeRenderingDataForValue:(double)a0 transformedPoint:(struct CGPoint { double x0; double x1; })a1 previousSlope:(long long)a2 nextSlope:(long long)a3 previousOptions:(long long)a4;
- (void)_layoutTransformRectVerticallyForData:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; long long x2; } *)a0 withTransformedPoint:(struct CGPoint { double x0; double x1; })a1;
- (long long)_slopeForPoint:(struct CGPoint { double x0; double x1; })a0 otherPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_transformRectIfNeededForData:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; long long x2; } *)a0 withTransformedPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithBoundingRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isLabelShiftingEnabled:(BOOL)a1 labelSizeBlock:(id /* block */)a2;
- (BOOL)processLastPoint;
- (BOOL)processTransformedPoint:(struct CGPoint { double x0; double x1; })a0 untransformedPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; long long x2; })renderingData;

@end
