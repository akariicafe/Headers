@interface CDMNLUServiceGraph : CDMServiceGraph

+ (id)requiredDAGServices;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
