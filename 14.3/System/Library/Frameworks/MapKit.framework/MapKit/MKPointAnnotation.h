@class NSString, CLLocation, VKCustomFeature;

@interface MKPointAnnotation : MKShape <MKGeoJSONObject, MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate> {
    VKCustomFeature *_customFeature;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long representation;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)annotation;
- (id)viewRepresentation;
- (void)prepareForReuse;
- (BOOL)isPersistent;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 title:(id)a1 subtitle:(id)a2;
- (void)setShowsBalloonCallout:(BOOL)a0;
- (id)_initWithGeoJSONObject:(id)a0 error:(id *)a1;
- (id)feature;
- (void)_setHiddenForOffscreen:(BOOL)a0;
- (BOOL)shouldRepresentSelf;
- (void)_invalidateCachedCoordinate;
- (BOOL)_isPendingSelectionAnimated;
- (id)reuseIdentifier;
- (BOOL)_shouldDeselectWhenDragged;

@end
