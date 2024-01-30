@class MKPlaceSectionHeaderView, NSArray, NSString, MKCuratedCollectionsPlacecardAnalyticsManager, MKCollectionsCarouselView, MKMapItem;
@protocol MKPlaceCollectionsDelegate;

@interface MKPlaceCuratedCollectionsViewController : MKPlaceSectionViewController <MKCollectionCarouselRoutingDelegate, MKCollectionCarouselAnalyticsDelegate, MKModuleViewControllerProtocol> {
    MKMapItem *_mapItem;
    struct CGSize { double width; double height; } _viewSize;
}

@property (retain, nonatomic) MKPlaceSectionHeaderView *headerView;
@property (retain, nonatomic) MKCollectionsCarouselView *carouselView;
@property (retain, nonatomic) NSArray *placeCollections;
@property (retain, nonatomic) NSArray *collectionIds;
@property (retain, nonatomic) MKCuratedCollectionsPlacecardAnalyticsManager *analyticsManager;
@property (weak, nonatomic) id<MKPlaceCollectionsDelegate> collectionsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0 withPlaceCollections:(id)a1 usingSyncCoordinator:(id)a2 usingMapItem:(id)a3 usingCollectionIds:(id)a4 exploreGuides:(id)a5;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)refreshCollections;
- (void)setUpHeaderView;
- (void)updateConstraintsForCarouselView;
- (BOOL)shouldShowMoreButton;
- (void)showMoreTapped;
- (void).cxx_destruct;
- (void)routeToGuidesHomeFromExploreGuides:(id)a0;
- (void)routeToCuratedCollection:(id)a0;
- (void)collectionsCarouselDidRouteToCollectionId:(id)a0 atIndex:(long long)a1 isSaved:(BOOL)a2;
- (void)collectionsCarouselDidScrollForward;
- (void)collectionsCarouselDidScrollBackward;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
