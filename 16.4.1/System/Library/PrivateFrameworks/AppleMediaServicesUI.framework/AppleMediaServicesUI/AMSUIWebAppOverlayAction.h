@class NSString, SKOverlay, AMSPromise;

@interface AMSUIWebAppOverlayAction : AMSUIWebAction <SKOverlayDelegate>

@property (nonatomic) BOOL dismiss;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *providerToken;
@property (retain, nonatomic) NSString *customProductPageIdentifier;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (retain, nonatomic) AMSPromise *presentationPromise;
@property (retain, nonatomic) SKOverlay *presentationOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_determineSceneWithContext:(id)a0;

- (void).cxx_destruct;
- (void)storeOverlay:(id)a0 didFailToLoadWithError:(id)a1;
- (void)storeOverlay:(id)a0 didFinishDismissal:(id)a1;
- (void)storeOverlay:(id)a0 didFinishPresentation:(id)a1;
- (void)_finishPromiseWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
