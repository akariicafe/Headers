@protocol _LSQueryResolving;

@interface _LSQueryContext : NSObject {
    id _resolver;
}

@property (class, nonatomic) BOOL simulateLimitedMappingForXCTests;

@property (readonly) id<_LSQueryResolving> _resolver;

+ (id)defaultContext;

- (void)clearCaches;
- (id)resolveQueries:(id)a0 error:(id *)a1;
- (void)enumerateResolvedResultsOfQuery:(id)a0 withBlock:(id /* block */)a1;
- (id)_resolveQueries:(id)a0 XPCConnection:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (id)_resolver;
- (id)debugDescription;

@end
