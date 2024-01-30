@class NSURL, WBSAppLink, LSApplicationProxy;

@interface _SFNavigationResult : NSObject

@property (readonly, nonatomic) BOOL appliesOneTimeUserInitiatedActionPolicy;
@property (readonly, nonatomic) LSApplicationProxy *externalApplication;
@property (readonly, nonatomic) long long externalApplicationCategory;
@property (readonly, nonatomic) BOOL isRedirectToAppleServices;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) WBSAppLink *appLink;
@property (nonatomic) BOOL loadWasUserDriven;

+ (id)resultOfLoadingRequest:(id)a0 isMainFrame:(BOOL)a1 disallowRedirectToExternalApps:(BOOL)a2 preferredApplicationBundleIdentifier:(id)a3 redirectDecisionHandler:(id /* block */)a4;
+ (void)determineResultOfLoadingRequest:(id)a0 isMainFrame:(BOOL)a1 disallowRedirectToExternalApps:(BOOL)a2 preferredApplicationBundleIdentifier:(id)a3 redirectDecisionHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
+ (id)resultOfType:(long long)a0 withURL:(id)a1;
+ (id)resultWithAppLink:(id)a0;
+ (id)resultWithRedirectToExternalURL:(id)a0 preferredApplicationBundleIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)_initWithType:(long long)a0 URL:(id)a1 externalApplication:(id)a2 appLink:(id)a3;
- (BOOL)shouldPromptWithPolicy:(long long)a0 telephonyNavigationPolicy:(id)a1 userAction:(id)a2 inBackgroundOrPrivateBrowsing:(BOOL)a3 inLockdownMode:(BOOL)a4;

@end
