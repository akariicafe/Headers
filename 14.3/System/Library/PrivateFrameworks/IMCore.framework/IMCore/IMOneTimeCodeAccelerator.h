@class IMDaemonController;
@protocol IMRemoteDaemonProtocol;

@interface IMOneTimeCodeAccelerator : NSObject

@property (retain, nonatomic) IMDaemonController<IMRemoteDaemonProtocol> *daemon;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (nonatomic) BOOL requestedOneTimeCodeStatusForConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)daemonControllerDidConnect;
- (void)consumeCodeWithGuid:(id)a0;
- (id)initWithDaemon:(id)a0 andBlock:(id /* block */)a1;
- (void)setUpConnectionToDaemaon;
- (void)daemonConnectionLost;
- (void)_incomingCodeUpdateFromDaemon:(id)a0;
- (id)initWithBlockForUpdates:(id /* block */)a0;
- (void)daemonControllerDidDisconnect;
- (void)daemonControllerWillConnect;

@end
