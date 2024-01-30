@class CTCarrierSpaceClient;

@interface SSBDatabaseUpdateSupport : NSObject {
    CTCarrierSpaceClient *_carrierSpaceClient;
}

@property (readonly, nonatomic) BOOL onHighCellularDataPlan;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchCellularDataPlan;
- (void)_fetchCellularDataPlanWithCompletionHandler:(id /* block */)a0;
- (id)fetchCellularDataPlanSynchronously;

@end
