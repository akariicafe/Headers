@class MKMapView;

@interface _MKLabelMarkerView : MKAnnotationView

@property (weak, nonatomic) MKMapView *mapView;

+ (BOOL)_followsTerrain;

- (void).cxx_destruct;
- (void)setAnnotation:(id)a0;
- (void)_deregisterObserver;
- (void)_registerObserver;
- (void)_updateAnchorOffset;
- (void)dealloc;
- (BOOL)shouldShowCallout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;

@end
