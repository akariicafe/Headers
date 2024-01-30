@class NSString, NSObject, NSXPCConnection;
@protocol PRBTRangingSessionDelegate, OS_dispatch_queue, OS_os_log;

@interface PRBTRangingSession : PRRangingDevice <PRBTRangingClientProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_os_log> *_logger;
}

@property (weak, nonatomic) id<PRBTRangingSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObject;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)handleInterruption;
- (void)handleInvalidation;
- (void)connectToDaemon;
- (id)synchronousRemoteObject;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)didFetchTxPower:(id)a0 fromDevice:(id)a1 withError:(id)a2;
- (void)didConnectToDevice:(id)a0 withError:(id)a1;
- (void)didStartRangingOnDevice:(id)a0 withError:(id)a1;
- (void)didStopOwnerRangingOnDevice:(id)a0 withError:(id)a1;
- (void)didReceiveNewBTRSSI:(id)a0;
- (void)fetchTxPower:(id)a0 isUT:(id)a1;
- (void)startUTRanging:(id)a0;
- (void)stopUTRanging:(id)a0;
- (void)startOwnerRanging:(id)a0;
- (void)stopOwnerRanging:(id)a0;

@end
