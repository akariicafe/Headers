@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, SLGLogClientProtocolDelegate;

@interface SLGLogXPCClient : NSObject <SLGLogClientProtocol, SLGLogClient> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (weak, nonatomic) id<SLGLogClientProtocolDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_connectWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handshake;
- (void)didReceiveInitialLogMessageFromDomain:(id)a0;
- (void)queryServer:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)serverDidReset;

@end
