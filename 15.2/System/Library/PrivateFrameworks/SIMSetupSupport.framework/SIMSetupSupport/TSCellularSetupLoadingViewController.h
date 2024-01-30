@class NSString, NSDictionary, NSURL, TSCellularSetupLoadingView, TSRemotePlanWebsheetContext, CoreTelephonyClient;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularSetupLoadingViewController : UIViewController <SFSafariViewControllerDelegate, UIAdaptivePresentationControllerDelegate, TSSetupFlowItem> {
    CoreTelephonyClient *_coreTelephonyClient;
}

@property (retain, nonatomic) NSURL *carrierURL;
@property (retain, nonatomic) NSDictionary *postdata;
@property (retain, nonatomic) TSCellularSetupLoadingView *loadingView;
@property (nonatomic) BOOL isRemotePlan;
@property (retain) TSRemotePlanWebsheetContext *remotePlanWebsheetContext;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (nonatomic) BOOL isProcessCanceled;
@property int flowType;
@property (readonly) BOOL useLiveID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancelButtonTapped;
- (void)deactivate;
- (void)safariViewControllerDidFinish:(id)a0;
- (void)safariViewController:(id)a0 didCompleteInitialLoad:(BOOL)a1;
- (id)navBarTitle;
- (void)setupNavigationBarItems;
- (void)setupCoreTelephonyClientForRemoteSignup;
- (void)_showFailureAlert:(id)a0 completion:(id /* block */)a1;
- (void)safariViewController:(id)a0 url:(id)a1 postdata:(id)a2 completion:(id /* block */)a3;
- (id)initWithRemotePlanWebsheetContext:(id)a0 isRemotePlan:(BOOL)a1;

@end
