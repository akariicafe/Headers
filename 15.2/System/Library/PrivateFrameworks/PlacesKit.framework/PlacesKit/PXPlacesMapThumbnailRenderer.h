@class PKExtendedTraitCollection, NSString;
@protocol PXPlacesMapGeotaggableInfoDelegate, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapThumbnailRenderer : NSObject <PXPlacesMapAnnotationPopoverImageRenderer, PXPlacesMapGeotaggableInfoDelegate>

@property (retain) id<PXPlacesMapGeotaggableInfoDelegate> informationDelegate;
@property (retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain) id extendedTraitObserver;
@property (readonly) unsigned long long popoverImageType;
@property (readonly) unsigned long long imageOptions;
@property (readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } minimumEdgeInsets;
@property (weak, nonatomic) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)annotationType;
- (void).cxx_destruct;
- (void)imageForGeotaggable:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 networkAccessAllowed:(BOOL)a2 andCompletion:(id /* block */)a3;
- (void)dealloc;
- (void)reset;
- (id)initWithTraitCollection:(id)a0 andInforamtionDelegate:(id)a1 popoverImageType:(unsigned long long)a2;
- (BOOL)supportsMoveAnimations;
- (id)viewForAnnotation:(id)a0 andMapView:(id)a1;
- (id)annotationForGeotaggables:(id)a0 initialCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)initWithTraitCollection:(id)a0 andInforamtionDelegate:(id)a1 popoverImageType:(unsigned long long)a2 popoverImageOptions:(unsigned long long)a3;

@end
