@class CAShapeLayer, MKMapView, UIView, NSMeasurementFormatter;
@protocol HULocationTriggerEditorMapDragRadiusViewDelegate, MKOverlay, MKAnnotation;

@interface HULocationTriggerEditorMapDragRadiusView : UIView

@property (retain, nonatomic) UIView *handleEndpointView;
@property (retain, nonatomic) id<MKAnnotation> annotation;
@property (retain, nonatomic) id<MKOverlay> overlay;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) BOOL isMinimum;
@property (nonatomic) BOOL isMaximum;
@property (retain, nonatomic) NSMeasurementFormatter *measurmentFormatter;
@property (retain, nonatomic) MKMapView *mapView;
@property (nonatomic) BOOL isDragging;
@property (weak, nonatomic) id<HULocationTriggerEditorMapDragRadiusViewDelegate> delegate;
@property (nonatomic) unsigned long long proximity;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })maxPoint;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })center;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (struct CGPoint { double x0; double x1; })minPoint;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)removeHandle:(BOOL)a0;
- (void)addHandleForAnnotation:(id)a0 withOverlay:(id)a1;
- (id)bezierPathWithEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)shapeLayerWithEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)popAnimateHandle;
- (void)animateHandleIn:(BOOL)a0;
- (double)currentHandleDistanceNormalized;
- (double)minimumRadiusNormalized;
- (double)maximumRadiusNormalized;
- (BOOL)usesMetric;
- (double)minimumInMeters;
- (double)currentHandleDistance;
- (void)resizeCircleAfterDelay;
- (double)feetToMeters:(double)a0;

@end
