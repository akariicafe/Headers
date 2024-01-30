@class IMDaemonController;
@protocol IMRemoteDaemonProtocol;

@interface IMOneTimeCodeAccelerator : NSObject

@property (retain, nonatomic) IMDaemonController<IMRemoteDaemonProtocol> *daemon;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (nonatomic) BOOL requestedOneTimeCodeStatusForConnection;

- (id)initWithDaemon:(id)a0 andBlock:(id /* block */)a1;
- (void)setUpConnectionToDaemaon;
- (void)daemonControllerDidConnect;
- (void)consumeCodeWithGuid:(id)a0;
- (void).cxx_destruct;
- (void)_incomingCodeUpdateFromDaemon:(id)a0;
- (id)initWithBlockForUpdates:(id /* block */)a0;
- (void)daemonControllerWillConnect;
- (void)dealloc;
- (void)daemonControllerDidDisconnect;
- (void)daemonConnectionLost;

@end
