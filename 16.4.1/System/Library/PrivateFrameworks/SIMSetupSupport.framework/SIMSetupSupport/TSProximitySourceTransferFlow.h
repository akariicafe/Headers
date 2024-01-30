@class UIViewController, NSString, TSCellularPlanProximityTransferController, CoreTelephonyClient, SSProximityDevice;
@protocol PRXCardContentProviding;

@interface TSProximitySourceTransferFlow : TSSIMSetupFlow <CoreTelephonyClientCellularPlanManagementDelegate, ESIMProxTransferControllerDelegate, TSSIMSetupFlowDelegate>

@property (retain) SSProximityDevice *btClient;
@property (retain) CoreTelephonyClient *ctClient;
@property BOOL isAuthenticationCompleted;
@property BOOL isFlowCompleted;
@property BOOL isRemotePeerClosed;
@property BOOL isTransferCompleted;
@property int passcodeType;
@property (retain) TSCellularPlanProximityTransferController *proxTransferController;
@property (retain) UIViewController<PRXCardContentProviding> *secureIntentProxCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)transferEventUpdate:(id)a0;
- (void)_setIdleTimerDisabled:(BOOL)a0;
- (id)firstViewController;
- (void)didComplete;
- (void)didRequestPresentationForProxCard:(id)a0;
- (void)_setupClient:(id)a0;
- (void)firstViewController:(id /* block */)a0;
- (void)_handleSKEvent:(id)a0;
- (void)_bootstrapTransfer;
- (void)_proxCardFlowDidDismiss;
- (void)_resetExtension:(id /* block */)a0;
- (id)initWithPeerDevice:(id)a0;
- (id)nextViewControllerFrom:(id)a0;
- (void)viewControllerDidComplete:(id)a0;

@end
