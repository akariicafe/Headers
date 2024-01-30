@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, PRGenericRangingSessionDelegate, OS_os_log;

@interface PRGenericRangingSession : PRRangingDevice <PRRangingClientProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_os_log> *_logger;
}

@property (weak, nonatomic) id<PRGenericRangingSessionDelegate> delegate;
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
- (void)rangingServiceDidUpdateState:(unsigned long long)a0 cause:(long long)a1;
- (void)didReceiveNewSolutions:(id)a0;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)a0;
- (void)remoteDevice:(id)a0 didChangeState:(long long)a1;
- (void)configureForP2PRanging:(id)a0 options:(id)a1;
- (BOOL)startP2PRanging:(id)a0 error:(id *)a1;
- (BOOL)stopP2PRanging:(id)a0 error:(id *)a1;

@end
