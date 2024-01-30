@class UIView, MUPlaceSectionFooterViewModel, NSArray, NSString, MUPlaceSectionHeaderViewModel, MKCuratedCollectionsPlacecardAnalyticsManager, MKCollectionsCarouselView, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MKPlaceCollectionsDelegate, MUInfoCardAnalyticsDelegate;

@interface MUCuratedGuidesSectionController : MUPlaceSectionController <UIScrollViewDelegate, MKCollectionCarouselAnalyticsDelegate, MUPlaceSectionControlling> {
    MUPlaceSectionView *_sectionView;
}

@property (retain, nonatomic) MKCollectionsCarouselView *carouselView;
@property (retain, nonatomic) NSArray *placeCollections;
@property (retain, nonatomic) NSArray *collectionIds;
@property (retain, nonatomic) MKCuratedCollectionsPlacecardAnalyticsManager *analyticsManager;
@property (weak, nonatomic) id<MKPlaceCollectionsDelegate> collectionsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (id)initWithDelegate:(id)a0 withPlaceCollections:(id)a1 usingSyncCoordinator:(id)a2 usingMapItem:(id)a3 usingCollectionIds:(id)a4 exploreGuides:(id)a5;
- (void)refreshCollections;
- (BOOL)shouldShowMoreButton;
- (void)_setupCollectionView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_setupViews;
- (void)exploreGuidesButtonTapped;
- (void)collectionsCarouselDidRouteToCollectionId:(id)a0 atIndex:(long long)a1 isSaved:(BOOL)a2;
- (void)collectionsCarouselDidScrollForward;
- (void)collectionsCarouselDidScrollBackward;
- (id)_sectionHeaderTitle;
- (id)draggableContent;
- (int)analyticsModuleType;
- (void)_seeAllTapped;

@end
