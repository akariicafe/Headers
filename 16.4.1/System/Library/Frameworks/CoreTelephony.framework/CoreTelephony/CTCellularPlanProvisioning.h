@class CoreTelephonyClient;

@interface CTCellularPlanProvisioning : NSObject {
    CoreTelephonyClient *_client;
}

@property (readonly, nonatomic) BOOL supportsEmbeddedSIM;

- (id)init;
- (void).cxx_destruct;
- (void)addPlanWith:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsCellularPlan;

@end
