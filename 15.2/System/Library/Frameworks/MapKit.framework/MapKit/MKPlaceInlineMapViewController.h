@class MKAnnotatedMapSnapshotter, NSArray, NSString, _MKPlaceViewController, _MKPlaceInlineMapContentView, MKMapItem, MKMapCamera;

@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol> {
    _MKPlaceInlineMapContentView *_contentView;
    MKMapItem *_updatingInlineMapItem;
    MKAnnotatedMapSnapshotter *_collectionSnapshotter;
    struct CGSize { double width; double height; } _currentSize;
}

@property (nonatomic) BOOL useWindowTrait;
@property (retain, nonatomic) MKMapCamera *mapCamera;
@property (readonly, nonatomic) NSArray *visibleMapItems;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;
@property (weak, nonatomic) _MKPlaceViewController *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inlineMapWithMapItem:(id)a0 options:(unsigned long long)a1;

- (void)viewDidLoad;
- (id)initWithMKMapItem:(id)a0;
- (void)_handleTapOnMap;
- (void)_updateMapIfNeeded;
- (void)updateInlineMapWithRefinedMapItems;
- (void)_updateInlineMapWithRefinedMapItems;
- (void)cancelSnapshotRequestIfNeeded;
- (id)traitCollectionForSnapshot;
- (void)viewDidLayoutSubviews;
- (void)_updateSnapshotImage:(id)a0;
- (void)_launchMaps;
- (BOOL)_canShowWhileLocked;
- (void)_updateMap;
- (void)loadView;
- (id)snapshot;
- (struct CGSize { double x0; double x1; })_mapSize;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;

@end
