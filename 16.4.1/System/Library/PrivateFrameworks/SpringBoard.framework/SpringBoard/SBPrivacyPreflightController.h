@class NSString, PDCPreflightManager, NSMutableDictionary;

@interface SBPrivacyPreflightController : NSObject <BSDescriptionStreamable> {
    PDCPreflightManager *_privacyPreflightManager;
    NSMutableDictionary *_applicationPreflightControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)preflightLaunchForApplication:(id)a0 sceneIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)requiresPreflightForApplication:(id)a0;

@end
