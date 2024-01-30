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

- (BOOL)_canShowWhileLocked;
- (id)snapshot;
- (void)viewDidLoad;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_updateMap;
- (void)_handleTapOnMap;
- (void)_launchMaps;
- (struct CGSize { double x0; double x1; })_mapSize;
- (void)_updateInlineMapWithRefinedMapItems;
- (void)_updateMapIfNeeded;
- (void)_updateSnapshotImage:(id)a0;
- (void)cancelSnapshotRequestIfNeeded;
- (id)initWithMKMapItem:(id)a0;
- (id)traitCollectionForSnapshot;
- (void)updateInlineMapWithRefinedMapItems;

@end
