@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, CAMNebulaDaemonIrisClientProtocol, CAMNebulaDaemonTimelapseClientProtocol;

@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (readonly, nonatomic) NSXPCConnection *_connection;
@property (readonly, nonatomic) long long _connectionCount;
@property (weak, nonatomic) id<CAMNebulaDaemonTimelapseClientProtocol> timelapseClientDelegate;
@property (weak, nonatomic) id<CAMNebulaDaemonIrisClientProtocol> irisClientDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_daemonProtocolInterface;
+ (id)_clientProtocolInterface;

- (void)stopTimelapseWithUUID:(id)a0;
- (void)forceStopTimelapseCaptureWithReasons:(long long)a0;
- (void)_getProxyForExecutingBlock:(id /* block */)a0;
- (void)ensureConnectionToDaemon;
- (void)resumeTimelapseWithUUID:(id)a0;
- (void)pingAfterInterruption;
- (void)performIrisCrashRecovery;
- (void)enqueueIrisVideoJobs:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)finishCaptureForTimelapseWithUUID:(id)a0;
- (void)updateTimelapseWithUUID:(id)a0;
- (void)_ensureConnectionToDaemon;
- (void)startTimelapseWithUUID:(id)a0;
- (void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)a0;
- (void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(BOOL)a0;
- (void)closeConnectionToDaemon;
- (void)_closeConnectionToDaemon;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)a0;

@end
