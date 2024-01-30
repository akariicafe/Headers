@interface CDMEmbeddingServiceGraph : CDMServiceGraph

+ (id)requiredDAGServices;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
