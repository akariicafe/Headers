@class VCPObjectPool;

@interface VCPMAEmbeddingAnalyzer : NSObject {
    VCPObjectPool *_sessionPool;
}

- (id)init;
- (void).cxx_destruct;
- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1 preferANE:(BOOL)a2;
- (void)analyzeWithImageURL:(id)a0 requestTypes:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
