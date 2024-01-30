@class PXPlacesMapView;

@interface PXPlacesMapInfoViewController : UIViewController

@property (weak) PXPlacesMapView *mapView;

- (void).cxx_destruct;
- (id)initWithMapView:(id)a0;
- (void)tappedDone:(id)a0;
- (void)tappedDimView:(id)a0;
- (void)tapped3dButton:(id)a0;
- (void)mapTypeChanged:(id)a0;
- (long long)segmentIndexFor:(unsigned long long)a0;
- (void)viewDidLoad;

@end
