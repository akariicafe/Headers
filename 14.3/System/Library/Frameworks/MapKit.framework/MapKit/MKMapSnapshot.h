@class UIImage, VKMapSnapshot, UITraitCollection;

@interface MKMapSnapshot : NSObject {
    VKMapSnapshot *_snapshot;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UITraitCollection *traitCollection;

+ (id)createSnapshotWithOptions:(id)a0 timeoutInSeconds:(long long)a1;

- (void).cxx_destruct;
- (void)_prepareForRenderWithAnnotationViews:(id)a0;
- (void)_displayAppleLogoForMapType:(unsigned long long)a0 withScale:(double)a1 forDarkMode:(BOOL)a2;
- (id)_initWithSnapshot:(id)a0 traitCollection:(id)a1;
- (struct CLLocationCoordinate2D { double x0; double x1; })_coordinateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_hasNoDataPlaceholders;
- (id)snapshotWithAnnotationView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)snapshotWithAnnotationView:(id)a0 atCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })pointForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
