@class CoreTelephonyClient;

@interface CTCellularPlanProvisioning : NSObject {
    CoreTelephonyClient *_client;
}

- (id)init;
- (BOOL)supportsCellularPlan;
- (void).cxx_destruct;
- (void)addPlanWith:(id)a0 completionHandler:(id /* block */)a1;

@end
