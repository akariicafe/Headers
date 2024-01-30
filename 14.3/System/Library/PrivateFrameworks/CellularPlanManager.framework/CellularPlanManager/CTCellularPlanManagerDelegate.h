@class NSString;

@interface CTCellularPlanManagerDelegate : NSObject <CTCellularPlanClientDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)planInfoDidUpdate;
- (void)remoteProvisioningDidBecomeAvailable;
- (void)localPlanInfoDidUpdate:(id)a0;
- (void)pendingTransferPlanInfoDidUpdate;
- (void)carrierInfoDidUpdate;

@end
