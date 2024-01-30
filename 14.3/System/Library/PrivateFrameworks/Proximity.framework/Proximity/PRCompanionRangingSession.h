@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, PRGenericRangingSessionDelegate, OS_os_log;

@interface PRCompanionRangingSession : PRRangingDevice <PRRangingClientProtocol> {
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
- (void).cxx_destruct;
- (id)synchronousRemoteObject;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)handleInterruption;
- (void)didFailWithError:(id)a0;
- (void)handleInvalidation;
- (void)invalidate;
- (void)connectToDaemon;
- (void)rangingServiceDidUpdateState:(unsigned long long)a0 cause:(long long)a1;
- (void)didReceiveNewSolutions:(id)a0;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)a0;
- (void)remoteDevice:(id)a0 didChangeState:(long long)a1;
- (void)configureForCompanionRanging:(id)a0 options:(id)a1;
- (BOOL)startCompanionRanging:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)stopCompanionRanging:(id)a0 error:(id *)a1;

@end
