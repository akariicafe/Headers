@class FMFuture, NSString, FMXPCSession, NSObject;
@protocol OS_dispatch_queue;

@interface SPFirmwareUpdateSession : NSObject <SPFirmwareUpdateSessionPrivateProtocol>

@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMFuture *sessionInvalidationFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceDescription;
- (id)proxy;
- (id)init;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)beaconsInFirmwareUpdateState:(long long)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (void)updateBeaconUUID:(id)a0 firmwareUpdateState:(long long)a1 systemVersion:(id)a2 error:(id)a3 completion:(id /* block */)a4;
- (void)initiateFirmwareUpdateForAllEligibleBeaconsWithCompletion:(id /* block */)a0;
- (void)firmwareUpdateStateForBeaconUUID:(id)a0 completion:(id /* block */)a1;
- (void)candidateBeaconsWithCompletion:(id /* block */)a0;
- (void)connectionTokensForBeaconUUID:(id)a0 dateInterval:(id)a1 completion:(id /* block */)a2;

@end
