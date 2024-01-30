@class CHXPCClientHelper;

@interface CHIntegrationTestClient : NSObject <CHIntegrationTestProtocol> {
    CHXPCClientHelper *_clientHelper;
}

- (id)init;
- (void).cxx_destruct;
- (void)populateSampleAppLaunchEmbeddingWithCompletion:(id /* block */)a0;

@end
