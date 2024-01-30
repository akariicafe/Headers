@class CTCarrierSpaceClient;

@interface SSBDatabaseUpdateSupport : NSObject {
    CTCarrierSpaceClient *_carrierSpaceClient;
}

@property (readonly, nonatomic) BOOL onHighCellularDataPlan;

- (id)fetchCellularDataPlanSynchronously;
- (void)_fetchCellularDataPlan;
- (void)_fetchCellularDataPlanWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
