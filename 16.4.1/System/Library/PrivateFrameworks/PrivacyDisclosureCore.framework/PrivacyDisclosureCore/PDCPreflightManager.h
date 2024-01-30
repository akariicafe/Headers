@class NSObject;
@protocol OS_dispatch_queue, PDCConsentStore;

@interface PDCPreflightManager : NSObject

@property (class, readonly, nonatomic, getter=isPreflightFeatureEnabled) BOOL preflightFeatureEnabled;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<PDCConsentStore> consentStore;

- (id)initWithTargetQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresPreflightForApplicationRecord:(id)a0;
- (id)preflightLaunchForApplication:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)requiresPreflightForApplication:(id)a0;
- (id)_preflightLaunchForApplication:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_requiresPreflightForApplication:(id)a0;
- (BOOL)_requiresPreflightForApplicationRecord:(id)a0;
- (id)initWithTargetQueue:(id)a0 consentStore:(id)a1;

@end
