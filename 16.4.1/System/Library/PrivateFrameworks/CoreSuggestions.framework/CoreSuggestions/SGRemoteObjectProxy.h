@class SGDaemonConnection;
@protocol SGDSuggestManagerAllProtocol;

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol> {
    SGDaemonConnection *_connection;
    id<SGDSuggestManagerAllProtocol> _inProcessSuggestManager;
    BOOL _queuesRequestsIfBusy;
}

- (id)initWithInProcessSuggestManager:(id)a0;
- (id)initWithConnection:(id)a0 queuesRequestsIfBusy:(BOOL)a1;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
