@class CAShapeLayer, MKMapView, UIView, NSMeasurementFormatter;
@protocol MKAnnotation, MKOverlay, WFLocationTriggerEditorMapDragRadiusViewDelegate;

@interface WFLocationTriggerEditorMapDragRadiusView : UIView

@property (retain, nonatomic) MKMapView *mapView;
@property (nonatomic) BOOL isDragging;
@property (weak, nonatomic) id<WFLocationTriggerEditorMapDragRadiusViewDelegate> delegate;
@property (nonatomic) unsigned long long proximity;
@property (retain, nonatomic) UIView *handleEndpointView;
@property (retain, nonatomic) id<MKAnnotation> annotation;
@property (retain, nonatomic) id<MKOverlay> overlay;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) BOOL isMinimum;
@property (nonatomic) BOOL isMaximum;
@property (retain, nonatomic) NSMeasurementFormatter *measurmentFormatter;

- (struct CGPoint { double x0; double x1; })center;
- (struct CGPoint { double x0; double x1; })maxPoint;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)removeHandle:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })minPoint;
- (double)currentHandleDistanceNormalized;
- (double)minimumInMeters;
- (void)addHandleForAnnotation:(id)a0 withOverlay:(id)a1;
- (void)animateHandleIn:(BOOL)a0;
- (id)bezierPathWithEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)currentHandleDistance;
- (double)feetToMeters:(double)a0;
- (double)maximumRadiusNormalized;
- (double)minimumRadiusNormalized;
- (void)popAnimateHandle;
- (void)resizeCircleAfterDelay;
- (id)shapeLayerWithEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)usesMetric;

@end
