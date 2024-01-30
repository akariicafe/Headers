@class NSString, HKProxyProvider;

@interface HKClinicalSharingClient : NSObject <_HKXPCExportable> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id)remoteInterface;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)exportedInterface;
- (void)shareHealthDataWithOptions:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)submitOnboardingAnalyticsForStepIdentifier:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)shareHealthDataWithOptions:(unsigned long long)a0 reason:(long long)a1 date:(id)a2 completion:(id /* block */)a3;
- (void)scheduleSharingHealthDataWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)gatherQueryDiagnosticsWithOptions:(unsigned long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)submitDailyAnalyticsWithCompletion:(id /* block */)a0;

@end
