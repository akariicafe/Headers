@class UITraitCollection, NSArray, UIImage, VKMapSnapshot;

@interface MKMapSnapshot : NSObject {
    VKMapSnapshot *_snapshot;
    NSArray *_allTraitCollections;
    NSArray *_allImages;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UITraitCollection *traitCollection;

+ (id)createSnapshotWithOptions:(id)a0 timeoutInSeconds:(long long)a1;

- (id)_statsMemoryUsage;
- (id)snapshotWithAnnotationView:(id)a0 atCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)snapshotWithAnnotationView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)_initWithSnapshot:(id)a0 traitCollection:(id)a1;
- (void)_compositeOnImages:(id /* block */)a0 drawQueue:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (struct CGPoint { double x0; double x1; })pointForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })_coordinateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_hasNoDataPlaceholders;
- (void)_prepareForRenderWithAnnotationViews:(id)a0 workQueue:(id)a1 annotationViewDrawingQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_displayAppleLogoForMapType:(unsigned long long)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;

@end
