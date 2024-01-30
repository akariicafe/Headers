@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKMenstrualCyclesDiagnostics : NSObject <HKMenstrualCyclesDiagnosticsInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)triggerAnalysisForDiagnosticsWithCompletion:(id /* block */)a0;

@end
