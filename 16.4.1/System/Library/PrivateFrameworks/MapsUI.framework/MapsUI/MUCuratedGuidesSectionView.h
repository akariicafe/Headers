@class MKCollectionsCarouselView, NSArray, MUPagingScrollContainerView;
@protocol MKPlaceCollectionsDelegate;

@interface MUCuratedGuidesSectionView : UIView {
    MUPagingScrollContainerView *_pagingContainerView;
    BOOL _isSingleCollection;
}

@property (readonly, nonatomic) long long carouselContext;
@property (weak, nonatomic) id<MKPlaceCollectionsDelegate> collectionsDelegate;
@property (retain, nonatomic) MKCollectionsCarouselView *carouselView;
@property (readonly, nonatomic, getter=isShowingExploreGuides) BOOL showingExploreGuides;
@property (copy, nonatomic) NSArray *visibleFocusItems;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)refreshCollections;
- (void)displayCollectionsIfNeeded;
- (id)initCollectionsCarouselViewWithPlaceCollections:(id)a0 usingSyncCoordinator:(id)a1 withRoutingDelegate:(id)a2 withScrollViewDelegate:(id)a3 withAnalyticsDelegate:(id)a4 exploreGuides:(id)a5;

@end
