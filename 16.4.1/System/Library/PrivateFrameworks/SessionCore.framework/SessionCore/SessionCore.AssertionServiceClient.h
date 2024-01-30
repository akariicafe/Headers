@interface SessionCore.AssertionServiceClient : NSObject <SNAAssertionXPCServer, SNAAssertionXPCClient> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ assertionManager;
}

- (void)didConnect;
- (id)acquire:(id)a0 error:(id *)a1;
- (void)didInvalidate:(id)a0;
- (BOOL)invalidate:(id)a0 error:(id *)a1;
- (id)reconnect:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;

@end
