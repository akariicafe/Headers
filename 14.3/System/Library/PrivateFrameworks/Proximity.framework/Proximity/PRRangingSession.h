@class PRPeer, NSString, NSMutableSet, NSXPCConnection, NSObject, PRRangingDevice;
@protocol PRRangingSessionDelegate, OS_dispatch_queue, OS_os_log;

@interface PRRangingSession : NSObject <PRAidedRangingClientProtocol> {
    NSObject<OS_os_log> *_logger;
    NSXPCConnection *_connection;
    PRRangingDevice *_rangingDevice;
}

@property (retain) NSMutableSet *sessionParticipants;
@property BOOL isReady;
@property (getter=isValid) BOOL valid;
@property (retain) PRPeer *rangedPeer;
@property (weak) id<PRRangingSessionDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) PRPeer *localPeer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)computeLocalDeviceIndex:(id)a0 sessionParticipants:(id)a1;

- (id)remoteObject;
- (id)init;
- (void).cxx_destruct;
- (void)handleInterruption;
- (void)didFailWithError:(id)a0;
- (void)invokeDelegateBlock:(id /* block */)a0;
- (void)handleInvalidation;
- (void)invalidate;
- (void)connectToDaemon;
- (id)rangingConfigurationWithDeviceIndex:(unsigned long long)a0;
- (void)requestInitialCollaborationDataWithCompletionHandler:(id /* block */)a0;
- (void)rangingServiceDidUpdateState:(unsigned long long)a0 cause:(long long)a1;
- (void)didReceiveNewSolutions:(id)a0;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)a0;
- (void)sendDataToPeers:(id)a0;
- (void)startRangingWithPeer:(id)a0;
- (void)stopRangingWithPeer:(id)a0;
- (void)pushCollaborationData:(id)a0;

@end
