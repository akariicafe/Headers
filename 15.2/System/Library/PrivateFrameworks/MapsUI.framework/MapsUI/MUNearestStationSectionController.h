@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MKMapItem, MKETAProvider, MUNearestStationRowView, MUPlaceVerticalCardContainerView, UIViewController, MUPlaceFooterAttributionController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate, MUNearestStationSectionControllerDelegate;

@interface MUNearestStationSectionController : MUTransitLineItemSectionController <MKETAProviderObserver, MUPlaceVerticalCardContainerViewDelegate, MUPlaceSectionControlling> {
    MKETAProvider *_etaProvider;
    MKMapItem *_nearestStation;
    MUPlaceSectionView *_sectionView;
    MUNearestStationRowView *_nearestStationRowView;
    MUPlaceFooterAttributionController *_footerAttributionController;
    MUPlaceVerticalCardContainerView *_containerView;
}

@property (weak, nonatomic) id<MUNearestStationSectionControllerDelegate> nearestStationDelegate;
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

- (void)ETAProviderUpdated:(id)a0;
- (void).cxx_destruct;
- (void)verticalCardContainerView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (void)_handleAttributionTap;
- (void)_createNearestStationSection;
- (id)initWithTransitLineItem:(id)a0 etaProvider:(id)a1;
- (void)updateWithMapItem:(id)a0 isLoading:(BOOL)a1;

@end
