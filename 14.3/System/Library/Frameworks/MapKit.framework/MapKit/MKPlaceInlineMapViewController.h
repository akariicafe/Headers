@class MKGroupedPlacesSnapshotter, NSArray, NSString, _MKPlaceViewController, _MKPlaceInlineMapContentView, MKMapItem, MKMapCamera;

@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol> {
    _MKPlaceInlineMapContentView *_contentView;
    MKMapItem *_updatingInlineMapItem;
    MKGroupedPlacesSnapshotter *_collectionSnapshotter;
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

- (void)_launchMaps;
- (id)initWithMKMapItem:(id)a0;
- (void)_handleTapOnMap;
- (void)updateInlineMapWithRefinedMapItems;
- (void)_updateInlineMapWithRefinedMapItems;
- (void)cancelSnapshotRequestIfNeeded;
- (id)traitCollectionForSnapshot;
- (void)_updateSnapshotImage:(id)a0;
- (void).cxx_destruct;
- (id)snapshot;
- (long long)preferredUserInterfaceStyle;
- (void)loadView;
- (void)_updateMap;
- (struct CGSize { double x0; double x1; })_mapSize;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
