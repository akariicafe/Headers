@class MKMapView;

@interface _MKLabelMarkerView : MKAnnotationView

@property (weak, nonatomic) MKMapView *mapView;

+ (BOOL)_followsTerrain;

- (void)setAnnotation:(id)a0;
- (BOOL)shouldShowCallout;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)_deregisterObserver;
- (void)_updateAnchorOffset;
- (void)_registerObserver;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;

@end
