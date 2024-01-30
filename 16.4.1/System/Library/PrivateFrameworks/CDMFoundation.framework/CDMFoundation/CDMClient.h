@class CDMClientInterface;

@interface CDMClient : CDMClientInterface <CDMEmbeddingClient> {
    CDMClientInterface *_client;
}

+ (BOOL)useXPC;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (id)graphName;
- (id)initWithXPC:(BOOL)a0;
- (id)errorFromSetup;
- (void)processCDMNluRequest:(id)a0;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)setup:(id)a0;
- (BOOL)successFromSetup;
- (BOOL)areAssetsAvailable:(id)a0;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)doServiceCenterInitWithConfig:(id)a0;
- (void)handleOverridesAssetUpdateEvent:(id)a0;
- (void)initProxyObject:(BOOL)a0 delegate:(id)a1;
- (id)initWithXPCDelegate:(BOOL)a0 withDelegate:(id)a1;
- (BOOL)isLighthouseAPIEnabled;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processEmbeddingRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processNLUPreprocessRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupKVOForwarding;
- (void)setupWithLocale:(id)a0 embeddingVersion:(id)a1 completionHandler:(id /* block */)a2;

@end
