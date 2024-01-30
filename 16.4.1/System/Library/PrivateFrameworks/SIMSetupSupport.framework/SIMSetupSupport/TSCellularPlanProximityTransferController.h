@class NSString, CoreTelephonyClient;
@protocol ESIMProxTransferControllerDelegate;

@interface TSCellularPlanProximityTransferController : NSObject <CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupFlowDelegate>

@property (weak, nonatomic) id<ESIMProxTransferControllerDelegate> delegate;
@property (retain, nonatomic) CoreTelephonyClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
