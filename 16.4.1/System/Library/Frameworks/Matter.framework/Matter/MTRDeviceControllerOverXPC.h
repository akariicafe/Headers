@class MTRDeviceControllerXPCConnection, NSObject;
@protocol OS_dispatch_queue, NSCopying;

@interface MTRDeviceControllerOverXPC : MTRDeviceController

@property (retain, nonatomic) id<NSCopying> controllerID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection;

+ (id)sharedControllerWithID:(id)a0 xpcConnectBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)openPairingWindowWithPIN:(unsigned long long)a0 duration:(unsigned long long)a1 discriminator:(unsigned long long)a2 setupPIN:(unsigned long long)a3 error:(id *)a4;
- (id)baseDeviceForNodeID:(id)a0;
- (BOOL)cancelCommissioningForNodeID:(id)a0 error:(id *)a1;
- (BOOL)commissionDevice:(unsigned long long)a0 commissioningParams:(id)a1 error:(id *)a2;
- (BOOL)commissionNodeWithID:(id)a0 commissioningParams:(id)a1 error:(id *)a2;
- (id)deviceBeingCommissionedWithNodeID:(id)a0 error:(id *)a1;
- (void)fetchControllerIdWithQueue:(id)a0 completion:(id /* block */)a1;
- (BOOL)getBaseDevice:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (id)getDeviceBeingCommissioned:(unsigned long long)a0 error:(id *)a1;
- (id)initWithControllerID:(id)a0 workQueue:(id)a1 connectBlock:(id /* block */)a2;
- (id)initWithControllerID:(id)a0 workQueue:(id)a1 xpcConnection:(id)a2;
- (BOOL)openPairingWindow:(unsigned long long)a0 duration:(unsigned long long)a1 error:(id *)a2;
- (BOOL)pairDevice:(unsigned long long)a0 address:(id)a1 port:(unsigned short)a2 discriminator:(unsigned short)a3 setupPINCode:(unsigned int)a4 error:(id *)a5;
- (BOOL)pairDevice:(unsigned long long)a0 discriminator:(unsigned short)a1 setupPINCode:(unsigned int)a2 error:(id *)a3;
- (BOOL)pairDevice:(unsigned long long)a0 onboardingPayload:(id)a1 error:(id *)a2;
- (BOOL)setupCommissioningSessionWithPayload:(id)a0 newNodeID:(id)a1 error:(id *)a2;
- (BOOL)stopDevicePairing:(unsigned long long)a0 error:(id *)a1;

@end
