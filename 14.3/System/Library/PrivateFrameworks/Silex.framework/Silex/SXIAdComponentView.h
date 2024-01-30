@class ADBannerView, SXIAdDebugView, SXAdController, NSError, NSString;
@protocol SXLayoutInvalidator, SXHost, SXAnalyticsReporting;

@interface SXIAdComponentView : SXComponentView <ADBannerViewDelegate, SXAdDisplayInstructions, SXViewportChangeListener, SXAdDocumentStateObserver>

@property (readonly, weak, nonatomic) SXAdController *adController;
@property (readonly, nonatomic) id<SXLayoutInvalidator> layoutInvalidator;
@property (readonly, nonatomic) id<SXAnalyticsReporting> analyticsReporter;
@property (readonly, nonatomic) id<SXHost> host;
@property (retain, nonatomic) ADBannerView *bannerView;
@property (nonatomic) BOOL hasInvalidatedLayout;
@property (nonatomic) struct CGSize { double width; double height; } viewportSizeOnAdRequest;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (nonatomic) BOOL isReceivingViewportChanges;
@property (retain, nonatomic) SXIAdDebugView *debugView;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int opportunityError;
@property (retain, nonatomic) NSString *generatedOpportunityIdentifier;
@property (nonatomic) BOOL isDisplayingBannerView;
@property (nonatomic) BOOL didUnloadBannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneDidActivate:(id)a0;
- (void).cxx_destruct;
- (void)bannerView:(id)a0 didFailToReceiveAdWithError:(id)a1;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)sceneDidEnterBackground:(id)a0;
- (void)bannerViewDidLoadAd:(id)a0;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)visibilityStateDidChangeFromState:(long long)a0;
- (void)loadComponent:(id)a0;
- (void)stopDisplayingAdWithError:(unsigned long long)a0;
- (void)adSheetDisconnectedNotification:(id)a0;
- (void)cancelAdRequest;
- (BOOL)shouldRegisterForViewportChanges;
- (void)registerForViewportChanges;
- (void)removeBannerViewWithError:(id)a0;
- (void)invalidateLayoutIfNeeded;
- (BOOL)shouldRequestBannerView;
- (void)requestBannerView;
- (void)displayBannerView;
- (void)layoutBannerView;
- (BOOL)hasRequestedBannerViewCurrentViewport;
- (BOOL)shouldSendOpportunityEvent;
- (void)sendOpportunityEvent;
- (void)unloadBannerWithError:(id)a0;
- (void)adDocumentAppearing;
- (void)adDocumentDisappeared;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 adController:(id)a4 layoutInvalidator:(id)a5 analyticsReporting:(id)a6 host:(id)a7;

@end
