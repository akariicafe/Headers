@class PXPlacesMapView;

@interface PXPlacesMapInfoViewController : UIViewController

@property (weak) PXPlacesMapView *mapView;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithMapView:(id)a0;
- (void)mapTypeChanged:(id)a0;
- (void)tapped3dButton:(id)a0;
- (id)_configurationForSegmentIndex:(long long)a0 pitch:(double)a1;
- (long long)_segmentIndexForConfiguration:(id)a0;
- (void)tappedDimView:(id)a0;
- (void)tappedDone:(id)a0;

@end
