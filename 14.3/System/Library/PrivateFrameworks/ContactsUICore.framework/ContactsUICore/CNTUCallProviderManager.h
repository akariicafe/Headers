@class TUCallProviderManager, NSString;

@interface CNTUCallProviderManager : NSObject <CNTUCallProviderManager>

@property (copy, nonatomic) TUCallProviderManager *callProviderManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)providerManagerQueue;
- (BOOL)isFirstPartyCallProvider:(id)a0;
- (BOOL)isActionType:(id)a0 supportedByProvider:(id)a1;
- (id)observableForCallProvidersChangedWithSchedulerProvider:(id)a0;
- (id)thirdPartyCallProvidersForActionType:(id)a0;
- (id)thirdPartyCallProviderWithBundleIdentifier:(id)a0;

@end
