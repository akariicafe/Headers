@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKMenstrualCyclesDiagnostics : NSObject <HKMenstrualCyclesDiagnosticsInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (void)triggerAnalysisForDiagnosticsWithCompletion:(id /* block */)a0;

@end
