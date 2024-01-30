@class NSString, NSDictionary, NSURL, AMSURLParser;

@interface VUIOpenURLHandler : NSObject <AMSUIDynamicViewControllerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _isFinishedLock;
    BOOL _isFinished;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSURL *deferredOpenURL;
@property (copy, nonatomic) id /* block */ deferredOpenURLCompletion;
@property (retain, nonatomic) NSString *offerURLString;
@property (retain, nonatomic) NSDictionary *contextData;
@property (retain, nonatomic) AMSURLParser *amsURLParser;
@property (copy, nonatomic) id /* block */ deferredAMSDynamicURLCompletion;
@property (nonatomic) BOOL openedByDeeplink;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)queryParameterStringfromURL:(id)a0 parameter:(id)a1;
+ (void)_insertPageBehindTop:(id)a0 viewControllers:(id)a1 clearStack:(BOOL)a2;
+ (void)_handleDeeplinkAction:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_pushPageViewControllers:(id)a0 viewControllers:(id)a1 skipLastViewController:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (void)_setIsFinished:(BOOL)a0;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;
- (void)_handleAMSWebURL:(id)a0 useAMSWebView:(BOOL)a1;
- (void)_handleAMSDynamicURL:(id)a0 isDeeplink:(BOOL)a1 contextData:(id)a2 completion:(id /* block */)a3;
- (void)_processDeeplink:(id)a0 appContext:(id)a1 completion:(id /* block */)a2;
- (void)_handleOpenURLRouterDataSource:(id)a0 appContext:(id)a1 clearStack:(BOOL)a2 startDate:(id)a3 openURL:(id)a4;
- (void)processLink:(id)a0 appContext:(id)a1 isDeeplink:(BOOL)a2 contextData:(id)a3 completion:(id /* block */)a4;
- (void)_processLocalLink:(id)a0 appContext:(id)a1 completion:(id /* block */)a2;
- (void)_processNonLocalLink:(id)a0 appContext:(id)a1 completion:(id /* block */)a2;
- (void)_processFamilySetup:(id)a0;
- (void)_processLocalLibraryLink:(id)a0 playbackInitiationDate:(id)a1 openURLCompletionDate:(id)a2;
- (void)_fetchLocalMediaWithAdamID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addMetricsTo:(id)a0;
- (void)_handleBundleOfferCompletion:(BOOL)a0;
- (void)_showBundlePurchaseConfirmationForResult:(id)a0;
- (BOOL)_isBundlePurchased:(id)a0 forOfferDomain:(id)a1;
- (void)parseURL:(id)a0 appContext:(id)a1 completion:(id /* block */)a2;
- (void)processEntityWithContextData:(id)a0 appContext:(id)a1;
- (void)saveDeferredURL:(id)a0 completion:(id /* block */)a1;
- (void)handleDeferredURLWithAppContext:(id)a0;

@end
