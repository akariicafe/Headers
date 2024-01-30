@class IMDaemonController;
@protocol IMDaemonProtocol;

@interface IMOneTimeCodeAccelerator : NSObject

@property (retain, nonatomic) IMDaemonController<IMDaemonProtocol> *daemon;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (nonatomic) BOOL requestedOneTimeCodeStatusForConnection;

- (void)_incomingCodeUpdateFromDaemon:(id)a0;
- (void)daemonControllerDidDisconnect;
- (void)consumeCodeWithGuid:(id)a0;
- (void)daemonConnectionLost;
- (void)dealloc;
- (id)initWithBlockForUpdates:(id /* block */)a0;
- (void)daemonControllerWillConnect;
- (void)setUpConnectionToDaemaon;
- (id)initWithDaemon:(id)a0 andBlock:(id /* block */)a1;
- (void)daemonControllerDidConnect;
- (void).cxx_destruct;

@end
