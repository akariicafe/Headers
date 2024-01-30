@class NSObject;
@protocol CHIntegrationTestProtocol;

@interface CHIntegrationTest : NSObject {
    NSObject<CHIntegrationTestProtocol> *_xpcClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)populateSampleAppLaunchEmbeddingWithCompletion:(id /* block */)a0;

@end
