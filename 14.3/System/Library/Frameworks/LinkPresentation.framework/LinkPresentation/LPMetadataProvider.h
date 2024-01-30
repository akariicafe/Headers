@class NSTimer, NSString, LPEvent, NSURL, BKSProcessAssertion, LPFetcherGroup, LPMetadataProviderSpecialization, NSObject, LPLinkMetadata, LPAnimatedImageTranscoder, NSMutableArray, WKWebView;
@protocol OS_dispatch_group;

@interface LPMetadataProvider : NSObject <WKNavigationDelegate, LPMetadataProviderSpecializationDelegate> {
    unsigned int _loggingID;
    WKWebView *_webView;
    NSURL *_URL;
    NSURL *_originalURL;
    NSTimer *_watchdog;
    BKSProcessAssertion *_processAssertion;
    LPEvent *_mainResourceLoadEvent;
    LPEvent *_webProcessLaunchEvent;
    LPLinkMetadata *_metadata;
    BOOL _complete;
    BOOL _fetchingFromExistingWebView;
    BOOL _hasStartedFetching;
    BOOL _hasEverStartedFetchingMetadataFromWebView;
    BOOL _timedOut;
    NSObject<OS_dispatch_group> *_subresourceFetchGroup;
    LPFetcherGroup *_iconFetcherGroup;
    LPAnimatedImageTranscoder *_imageTranscoder;
    NSMutableArray *_pendingFetchers;
    long long _specializationState;
    LPMetadataProviderSpecialization *_specializedMetadataProvider;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property BOOL cancelled;
@property (readonly, nonatomic) LPEvent *_event;
@property (nonatomic) BOOL useSpecializedProviders;
@property (nonatomic) BOOL fetchSubresources;
@property (nonatomic) unsigned long long allowedSpecializedProviders;
@property (nonatomic) BOOL shouldFetchSubresources;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_callbackQueue;
+ (id)requestMetadataForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_copyDefaultWebViewConfiguration;
+ (id)_defaultUserAgent;
+ (id)_incompleteMetadataRequests;
+ (id)requestMetadataForWebView:(id)a0 completionHandler:(id /* block */)a1;

- (void)cancel;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)init;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)metadataProviderSpecializationDidFail:(id)a0;
- (void)metadataProviderSpecialization:(id)a0 didCompleteWithMetadata:(id)a1;
- (void)_completedWithError:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)_failedWithErrorCode:(long long)a0 underlyingError:(id)a1;
- (void)startFetchingMetadataForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)startFetchingMetadataForWebView:(id)a0 completionHandler:(id /* block */)a1;
- (void)_startWatchdogTimer;
- (void)_cancelDueToTimeout;
- (void)_stopWatchdogTimer;
- (void)_willStartFetchingMetadata;
- (BOOL)_switchToSpecializationIfPossibleForURL:(id)a0;
- (void)_internalStartFetchingMetadataFromURL;
- (void)_fetchImplicitIcons;
- (void)_fetchMetadataFromWebView;
- (void)_fetchSubresources;
- (BOOL)_switchToSpecializationIfPossibleForMIMEType:(id)a0 URL:(id)a1 hasLoadedResource:(BOOL)a2;
- (void)_fetchedMetadata:(id)a0;
- (void)_setMetadata:(id)a0 onlyUpgradeFields:(BOOL)a1;
- (BOOL)_switchToSpecializationIfPossibleForMetadata:(id)a0 URL:(id)a1;
- (void)_redistinguishImagesAndIcons;
- (void)_simplifyTitle;
- (id)subresourceFetcherConfiguration;
- (void)_fetchAssociatedApplicationMetadataWithCompletionHandler:(id /* block */)a0;
- (void)_postProcessResolvedMetadataWithCompletionHandler:(id /* block */)a0;
- (void)_generateSpecializationIfPossibleForCompleteMetadata:(id)a0 URL:(id)a1 completionHandler:(id /* block */)a2;
- (void)metadataProviderSpecialization:(id)a0 didFetchPreliminaryMetadata:(id)a1;
- (id)_startFetchingMetadataForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)_startFetchingMetadataForWebView:(id)a0 completionHandler:(id /* block */)a1;
- (void)startFetchingSubresourcesForPartialMetadata:(id)a0 completionHandler:(id /* block */)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;

@end
