@class CoreTelephonyClient;

@interface CTCellularPlanProvisioning : NSObject {
    CoreTelephonyClient *_client;
}

- (void)addPlanWith:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsCellularPlan;
- (void).cxx_destruct;
- (id)init;

@end
