@interface CDMNLUPreprocessGraph : CDMServiceGraph

+ (id)requiredDAGServices;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
