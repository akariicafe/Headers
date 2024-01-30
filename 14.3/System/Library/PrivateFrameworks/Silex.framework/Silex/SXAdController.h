@class NSObject, SXViewport, NSMutableDictionary, NSString, SXDocument, NSMutableArray;
@protocol SXAdvertisingSettings, SXAdControllerDelegate, SXAdProvider, OS_dispatch_semaphore, SXAdControllerPresentationDelegate;

@interface SXAdController : NSObject <ADBannerViewInternalDelegate>

@property (readonly, nonatomic) id<SXAdProvider> adProvider;
@property (readonly, nonatomic) SXDocument *document;
@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) NSMutableArray *componentViewsDisplayingAds;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *bannerViewsSemaphore;
@property (retain, nonatomic) NSMutableDictionary *bannerViews;
@property (nonatomic) BOOL didLoadFirstBannerView;
@property (nonatomic, getter=isDebuggingEnabled) BOOL debuggingEnabled;
@property (retain, nonatomic) id<SXAdvertisingSettings> debugAdvertisementSettings;
@property (weak, nonatomic) id<SXAdControllerDelegate> delegate;
@property (weak, nonatomic) id<SXAdControllerPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)transitionToSizeWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)disableAdInteraction;
- (void)resumeAdInteraction;
- (BOOL)allowComponentViewInFirstViewport:(id)a0;
- (BOOL)isRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinMinimumDistanceOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 viewport:(struct CGSize { double x0; double x1; })a2;
- (BOOL)componentViewWithinScreenHeightOfViewport:(id)a0;
- (BOOL)isDisplayingAdsWithinScreenfullOfComponentView:(id)a0;
- (BOOL)isComponentViewWithinFirstViewport:(id)a0;
- (BOOL)component:(id)a0 isLastComponentInComponents:(id)a1;
- (id)initWithAdProvider:(id)a0 document:(id)a1 viewport:(id)a2;
- (BOOL)shouldRequestBannerViewForComponentView:(id)a0;
- (id /* block */)bannerViewForComponentView:(id)a0 component:(id)a1 metadataProvider:(id)a2 adType:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (id /* block */)prerollForComponent:(id)a0 metadataProvider:(id)a1 completionBlock:(id /* block */)a2;
- (void)componentView:(id)a0 didLoadBannerView:(id)a1;
- (void)componentView:(id)a0 didUnloadBannerView:(id)a1 withError:(id)a2;
- (void)componentView:(id)a0 failedToLoadBannerView:(id)a1 error:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBannerViewForComponentIdentifier:(id)a0;

@end
