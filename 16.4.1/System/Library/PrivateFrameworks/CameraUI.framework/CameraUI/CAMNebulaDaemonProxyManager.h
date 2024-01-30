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

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;

- (void)_ensureConnectionToDaemon;
- (void)startTimelapseWithUUID:(id)a0;
- (void)_closeConnectionToDaemon;
- (void)forceStopTimelapseCaptureWithReasons:(long long)a0;
- (void)ensureConnectionToDaemon;
- (void)resumeTimelapseWithUUID:(id)a0;
- (void)_getProxyForExecutingBlock:(id /* block */)a0;
- (void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)a0;
- (void)closeConnectionToDaemon;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)a0;
- (void)performIrisCrashRecovery;
- (void)pingAfterInterruption;
- (void)enqueueIrisVideoJobs:(id)a0;
- (void)stopTimelapseWithUUID:(id)a0;
- (void)finishCaptureForTimelapseWithUUID:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(BOOL)a0;
- (void)updateTimelapseWithUUID:(id)a0;

@end
