@class NEAppProxyFlow, NWEndpoint, NSObject, NSError;
@protocol OS_nw_context, OS_os_transaction, OS_nw_connection, OS_dispatch_queue;

@interface NPAppProxyFlowBridge : NSObject {
    BOOL _eofNW;
    BOOL _eofFlow;
    int _currentState;
    NEAppProxyFlow *_flow;
    NWEndpoint *_remoteEndpoint;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_transaction> *_networkTransaction;
    NSError *_connectionError;
    NSObject<OS_nw_context> *_nwContext;
}

- (void).cxx_destruct;
- (id)initWithAppProxyFlow:(id)a0 nwContext:(id)a1;

@end
