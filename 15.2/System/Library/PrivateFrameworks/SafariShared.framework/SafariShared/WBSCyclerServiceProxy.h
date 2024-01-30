@class NSXPCConnection;

@interface WBSCyclerServiceProxy : NSObject <WBSCyclerServiceProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (copy, nonatomic) id /* block */ connectionInvalidationHandler;
@property (copy, nonatomic) id /* block */ errorHandler;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setTestTargetEndpoint:(id)a0 reply:(id /* block */)a1;
- (id)_cyclerProxy;
- (void)setValue:(id)a0 forConfigurationKey:(id)a1 reply:(id /* block */)a2;
- (void)startCyclingFromBeginning:(BOOL)a0 reply:(id /* block */)a1;
- (void)stopCyclingWithReply:(id /* block */)a0;
- (void)sendRequestToTestSuite:(id)a0 reply:(id /* block */)a1;
- (void)fetchStatusWithReply:(id /* block */)a0;

@end
