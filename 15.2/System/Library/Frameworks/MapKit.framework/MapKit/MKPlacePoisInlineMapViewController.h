@class NSString, NSArray, CLLocation, _MKPlacePoisInlineMapContentView;

@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController <MKStackingViewControllerFixedHeightAware> {
    NSArray *_fetchedMapItems;
    _MKPlacePoisInlineMapContentView *_mapContentView;
}

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) BOOL resizableViewsDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inlineMapWithMapItem:(id)a0 options:(unsigned long long)a1;

- (void)viewDidLoad;
- (void)_handleTapOnMap;
- (id)visibleMapItems;
- (void)fetchPoisForBrand;
- (BOOL)_canShowWhileLocked;
- (void)_updateMap;
- (void)loadView;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (id)geoCamera;

@end
