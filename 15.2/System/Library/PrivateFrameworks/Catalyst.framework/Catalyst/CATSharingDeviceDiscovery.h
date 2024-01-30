@class NSArray, CATOperationQueue;
@protocol CATSharingDeviceDiscoveryDelegate, CATSharingDiscoveryPrimitives;

@interface CATSharingDeviceDiscovery : NSObject {
    id<CATSharingDiscoveryPrimitives> mDiscoveryPrimitives;
    id<CATSharingDeviceDiscoveryDelegate> mDelegate;
    CATOperationQueue *mDelegationQueue;
}

@property (nonatomic) BOOL invalidated;
@property (copy, nonatomic) NSArray *nearbyDevices;

- (void)deviceFound:(id)a0;
- (void)_invalidateWithError:(id)a0;
- (void)deviceLost:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)_activate;
- (void)invalidate;
- (void)addPrimitiveHandlers;
- (void)removePrimitiveHandlers;
- (id)initWithDiscoveryPrimitives:(id)a0 delegate:(id)a1 delegateOperationQueue:(id)a2;
- (id)pairingTerminalForDevice:(id)a0;

@end
