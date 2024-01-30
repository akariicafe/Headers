@class NSString, NSDictionary, NSURL, TSCellularSetupLoadingView, CTXPCServiceSubscriptionContext, CoreTelephonyClient;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularSetupLoadingViewController : UIViewController <TSSetupFlowItem> {
    CoreTelephonyClient *_coreTelephonyClient;
}

@property (retain, nonatomic) NSURL *carrierURL;
@property (retain, nonatomic) NSDictionary *postdata;
@property (retain, nonatomic) TSCellularSetupLoadingView *loadingView;
@property (retain, nonatomic) NSString *carrierName;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic) BOOL isRemotePlan;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelButtonTapped;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (id)navBarTitle;
- (void)setupNavigationBarItems;
- (void)setupCoreTelephonyClientForRemoteSignup;
- (void)_showFailureAlert:(id)a0 completion:(id /* block */)a1;
- (id)initWithSubscriptionContext:(id)a0 carrier:(id)a1 isRemotePlan:(BOOL)a2;

@end
