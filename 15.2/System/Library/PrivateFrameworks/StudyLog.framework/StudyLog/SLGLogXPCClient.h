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

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_handshake;
- (void)queryServer:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_connectWithCompletion:(id /* block */)a0;
- (void)didReceiveInitialLogMessageFromDomain:(id)a0;
- (void)serverDidReset;

@end
