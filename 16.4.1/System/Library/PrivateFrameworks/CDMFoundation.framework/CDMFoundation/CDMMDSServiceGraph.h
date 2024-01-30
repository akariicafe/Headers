@interface CDMMDSServiceGraph : CDMServiceGraph

+ (id)requiredDAGServices;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
