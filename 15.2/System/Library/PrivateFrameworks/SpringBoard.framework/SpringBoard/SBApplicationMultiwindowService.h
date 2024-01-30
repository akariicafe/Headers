@class NSString, FBServiceClientAuthenticator;

@interface SBApplicationMultiwindowService : NSObject <SBApplicationServerMultiwindowDelegate> {
    FBServiceClientAuthenticator *_triggerShowAllWindowsEntitlementAuthenticator;
    FBServiceClientAuthenticator *_requestShelfPresentationEntitlementAuthenticator;
}

@property (class, readonly, nonatomic) SBApplicationMultiwindowService *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationServer:(id)a0 client:(id)a1 showAllWindowsForBundleIdentifier:(id)a2;
- (void)applicationServer:(id)a0 client:(id)a1 requestShelfPresentationForSceneWithIdentifier:(id)a2;

@end
