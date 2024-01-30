@class GEOTransitOptions, MKPlaceActionManager, MKMapItem, MKPlaceCardActionItem, MKNearestStationViewController, MKPlaceCardActionsViewController, NSString, GEOAutomobileOptions, MKETAProvider, MKPlaceCardHeaderViewController, GEOCyclingOptions, MKPlaceHeaderButtonsViewController, NSNumber, MKInfoCardLoadingView;
@protocol GEOTransitLineItem, MKLocationManagerOperation, MKMapServiceTicket, MKTransitLineItemViewControllerDelegate, UIScrollViewDelegate;

@interface MKTransitLineItemViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKETAProviderDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MKNearestStationViewControllerDelegate, MKTransitLineIncidentsViewControllerDelegate, _MKInfoCardController, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate> {
    MKPlaceCardHeaderViewController *_headerViewController;
    MKPlaceHeaderButtonsViewController *_buttonsHeaderController;
    MKETAProvider *_etaProvider;
    MKInfoCardLoadingView *_loadingView;
    MKNearestStationViewController *_nearestStationViewController;
    id<MKLocationManagerOperation> _locationOperation;
    id<MKMapServiceTicket> _nearestStationTicket;
    MKMapItem *_nearestStation;
    unsigned long long _lastRequestedNearestID;
    NSString *_lastNearestRequestErrorMessage;
    MKPlaceActionManager *_actionManager;
    MKPlaceCardActionsViewController *_actionsViewController;
}

@property (retain, nonatomic) NSNumber *favorited;
@property (retain, nonatomic) MKPlaceCardActionItem *addToFavoritesItem;
@property (retain, nonatomic) MKPlaceCardActionItem *removeFromFavoritesItem;
@property (readonly, nonatomic) id<GEOTransitLineItem> transitLineItem;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) id<MKTransitLineItemViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) double contentAlpha;

+ (double)headerHeightInMinimalMode;

- (void)setLoading:(BOOL)a0;
- (id)createMenuActions;
- (void)_updateViewControllers;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateMaskAlpha:(double)a0 onHeight:(double)a1 withOffset:(double)a2;
- (double)stackingViewController:(id)a0 heightForSeparatorBetweenUpperViewController:(id)a1 andLowerViewController:(id)a2;
- (int)mapTypeForETAProvider:(id)a0;
- (void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)a0;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)a0;
- (BOOL)placeCardHeaderViewControllerShouldOverrideCallToAction:(id)a0;
- (void)placeHeaderButtonsViewController:(id)a0 didSelectPrimaryType:(unsigned long long)a1 withView:(id)a2;
- (void)placeActionManager:(id)a0 didSelectShareFromView:(id)a1;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)a0 fromView:(id)a1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)a0;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)a0;
- (void)placeCardActionControllerDidSelectAddToCollection:(id)a0;
- (void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)a0;
- (void)setContentVisibility:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 feedbackDelegateSelector:(int)a3;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 feedbackDelegateSelector:(int)a5;
- (id)initWithTransitLineItem:(id)a0;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)a0 resultIndex:(long long)a1 targetID:(unsigned long long)a2 transitSystem:(id)a3 transitDepartureSequence:(id)a4 transitCardCategory:(int)a5 transitIncident:(id)a6 feedbackDelegateSelector:(int)a7;
- (void)performAction:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)setTransitLineItem:(id)a0;
- (void)_fetchNearestStation;
- (void)viewDidDisappear:(BOOL)a0;
- (void)resetNearestStation;
- (void)setTransitLineItem:(id)a0 loading:(BOOL)a1;
- (void)nearestStationViewControllerDidSelectStation:(id)a0;
- (void)transitLineIncidentsViewController:(id)a0 didSelectDetailsForIncidents:(id)a1;
- (void)hideTitle:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;

@end
