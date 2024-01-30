@class NSString, ATSession, NSXPCConnection;

@interface ATSessionProxyConnection : NSObject <ATSessionProxy, ATSessionObserver> {
    ATSession *_session;
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)session:(id)a0 didUpdateSessionTask:(id)a1;
- (void)session:(id)a0 willBeginSessionTask:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)stop;
- (void)session:(id)a0 didFinishSessionTask:(id)a1;
- (id)initWithSession:(id)a0 connection:(id)a1;

@end
