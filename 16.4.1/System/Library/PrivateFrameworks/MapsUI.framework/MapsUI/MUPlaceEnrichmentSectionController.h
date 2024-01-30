@class MUWebContentViewController, MUPlaceSectionView, MUPlaceEnrichmentContextMenu, MUPlaceSectionHeaderViewModel, UIViewController, UIContextMenuInteraction, UIView, MUPlaceEnrichmentActionManager, NSString, GEOEnrichmentData, MKUGCCallToActionViewAppearance, NSArray, MUPlaceEnrichmentAction, MUPlaceSectionFooterViewModel;
@protocol MUPlaceEnrichmentSectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUPlaceEnrichmentSectionController : MUPlaceSectionController <MUWebContentViewControllerDelegate, MUPlaceEnrichmentManagerObserver, MUPlaceEnrichmentSectionAnalyticsDelegate, MUPlaceEnrichmentSectionContextMenuDelegate, MUPlaceSectionControlling> {
    MUWebContentViewController *_webContentViewController;
    MUPlaceSectionView *_sectionView;
    BOOL _shouldRemoveWebContent;
}

@property (retain, nonatomic) GEOEnrichmentData *enrichmentData;
@property (retain, nonatomic) MUPlaceEnrichmentActionManager *actionManager;
@property (retain, nonatomic) MUPlaceEnrichmentAction *contextMenuAction;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (retain, nonatomic) MUPlaceEnrichmentContextMenu *contextMenuButton;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) id<MUPlaceEnrichmentSectionControllerDelegate> placeEnrichmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (void)dealloc;
- (void).cxx_destruct;
- (id)draggableContent;
- (void)didTapRatePlace;
- (void)_populateRevealedAnalyticsModule:(id)a0;
- (void)_setupPlaceEnrichmentViewController;
- (void)addContextMenuUsingBoundingBox:(id)a0 accessibilityLabel:(id)a1;
- (int)analyticSuppressionReasonFrom:(id)a0;
- (int)analyticsModuleType;
- (void)didLayoutContextMenu:(id)a0 completion:(id /* block */)a1;
- (void)didTapAddPhoto;
- (id)initWithMapItem:(id)a0 actionManager:(id)a1 dataAvailability:(id)a2 amsResultProvider:(id)a3 callToActionDelegate:(id)a4 externalActionHandler:(id)a5 rapActionHandler:(id)a6;
- (void)instrumentExternalActionUsingAnalyticsAction:(int)a0 target:(int)a1 eventValue:(id)a2 sharedStateButtonList:(id)a3;
- (BOOL)isImpressionable;
- (BOOL)isWebContentViewControllerParentPlacecardLoading:(id)a0;
- (void)placeEnrichmentAPIContollerDidFetchEnrichmentData:(id)a0 forMapItem:(id)a1;
- (void)refreshPlaceEnrichment;
- (void)removeWebContentViewController:(id)a0 arguments:(id)a1;
- (void)updateActionsOverWebBridge:(id)a0;
- (void)webContentViewController:(id)a0 performHeightChangeWithBlock:(id /* block */)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)webContentViewControllerDidStopLoading:(id)a0;

@end
