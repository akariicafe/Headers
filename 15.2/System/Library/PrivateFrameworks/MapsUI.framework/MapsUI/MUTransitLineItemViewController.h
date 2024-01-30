@class GEOTransitOptions, MUPlaceHeaderView, MULoadingOverlayController, MUHeaderButtonsSectionController, MUNearestStationSectionController, MUPlaceActionManager, UIScrollView, MUScrollableStackView, NSString, GEOAutomobileOptions, MKETAProvider, GEOCyclingOptions, MUNearestStationProvider, NSArray, NSNumber;
@protocol MUTransitLineItemViewControllerDelegate, GEOTransitLineItem, UIScrollViewDelegate;

@interface MUTransitLineItemViewController : UIViewController <MKETAProviderDelegate, MUNearestStationSectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MUHeaderButtonsSectionControllerDelegate, MUTransitLineIncidentsSectionControllerDelegate, UIScrollViewDelegate, MUInfoCardAnalyticsDelegate, _MKInfoCardController, MKScrollableStacking> {
    NSArray *_sectionControllers;
    MUScrollableStackView *_contentStackView;
    MUPlaceActionManager *_actionManager;
    MKETAProvider *_etaProvider;
    MUNearestStationProvider *_nearbyStationProvider;
    MUNearestStationSectionController *_nearestStationSectionController;
    NSString *_lastNearestRequestErrorMessage;
    MUPlaceHeaderView *_headerView;
    MULoadingOverlayController *_loadingOverlayController;
}

@property (retain, nonatomic) NSNumber *favorited;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) MUHeaderButtonsSectionController *headerButtonsSectionController;
@property (readonly, nonatomic) id<GEOTransitLineItem> transitLineItem;
@property (weak, nonatomic) id<MUTransitLineItemViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) double contentAlpha;
@property (readonly, nonatomic) UIScrollView *scrollView;

+ (double)headerHeightInMinimalMode;

- (double)currentHeight;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (id)createMenuActions;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)updateMaskAlpha:(double)a0 onHeight:(double)a1 withOffset:(double)a2;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 feedbackDelegateSelector:(int)a5;
- (void)scrollToTopAnimated:(BOOL)a0;
- (int)mapTypeForETAProvider:(id)a0;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)a0 fromView:(id)a1 isQuickAction:(BOOL)a2;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)a0;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)setTransitLineItem:(id)a0;
- (void)_fetchNearestStation;
- (void)resetNearestStation;
- (void)setTransitLineItem:(id)a0 loading:(BOOL)a1;
- (void)performAction:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 feedbackDelegateSelector:(int)a3;
- (id)initWithTransitLineItem:(id)a0;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 moduleMetadata:(id)a3 feedbackDelegateSelector:(int)a4;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 moduleMetadata:(id)a5 feedbackDelegateSelector:(int)a6;
- (void)hideTitle:(BOOL)a0;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)a0 resultIndex:(long long)a1 targetID:(unsigned long long)a2 transitSystem:(id)a3 transitDepartureSequence:(id)a4 transitCardCategory:(int)a5 transitIncident:(id)a6 feedbackDelegateSelector:(int)a7;
- (void)_setupContentView;
- (void)placeDescriptionSectionControllerDidTapAttribution:(id)a0;
- (void)incidentsSectionController:(id)a0 didSelectDetailsForIncidents:(id)a1;
- (void)headerButtonsSectionControllerDidUpdateContent:(id)a0;
- (void)headerButtonsSectionController:(id)a0 didSelectPrimaryType:(unsigned long long)a1 withPresentationOptions:(id)a2;
- (void)nearestStationSectionController:(id)a0 didTapStationItem:(id)a1;
- (void)_updateSectionControllers;
- (void)_attachLoadingOverlayIfNeeded;
- (void)_removeLoadingOverlayIfNeeded;
- (id)_footerSectionController;

@end
