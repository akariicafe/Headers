@class NSObject, NSString, NSDictionary, NSMutableArray, CTDisplayPlanList;
@protocol OS_dispatch_group;

@interface TSTransferCloudFlowModel : NSObject {
    NSObject<OS_dispatch_group> *_queryGroup;
}

@property (retain, nonatomic) NSMutableArray *transferItems;
@property (retain, nonatomic) CTDisplayPlanList *carrierSetupItems;
@property (nonatomic) BOOL isActivationPolicyMismatch;
@property (nonatomic) BOOL isDualeSIMCapablityLoss;
@property (retain, nonatomic) NSString *websheetUrl;
@property (retain, nonatomic) NSDictionary *postdata;

- (void).cxx_destruct;
- (void)arePlansAvailable:(id /* block */)a0;
- (void)filterCarrierSetupItems:(id)a0;
- (void)filterTransferPlans:(id)a0;
- (void)getWebsheetInfo:(id)a0 completion:(id /* block */)a1;
- (void)requestCarrierSetups:(id /* block */)a0;
- (void)requestPlansWithCompletion:(id /* block */)a0;
- (void)requestTransferPlans:(id /* block */)a0;
- (BOOL)shouldShowCarrierSetupPane;

@end
