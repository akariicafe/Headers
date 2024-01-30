@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKMedicationControl : NSObject <_HKXPCExportable, HKMedicationControlClientInterface>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (id)init;
- (void).cxx_destruct;
- (void)unitTest_noOpWithCompletion:(id /* block */)a0;
- (void)allDismissedDrugInteractionsWithCompletion:(id /* block */)a0;
- (void)deleteDismissedDrugInteractionsForMedication:(id)a0 completion:(id /* block */)a1;
- (void)markInteractionAsDismissed:(id)a0 completion:(id /* block */)a1;

@end
