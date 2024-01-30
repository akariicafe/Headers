@class _TtC18VisualIntelligence35VisualIntelligenceServiceCompatible;

@interface VIService : NSObject {
    _TtC18VisualIntelligence35VisualIntelligenceServiceCompatible *_compatService;
}

+ (unsigned long long)parseFlowCacheVersion;

- (void).cxx_destruct;
- (id)init;
- (id)ontologyGraph;
- (id)searchWithParsedVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)searchWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (void)clearCacheWithOption:(long long)a0;
- (id)parseWithVisualQuery:(id)a0 cachedResult:(id)a1 completion:(id /* block */)a2;
- (id)parseWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)detectWithImage:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (id)initWithNetworkTimeoutInterval:(long long)a0;
- (id)parseWithVisualQuery:(id)a0 cachedResults:(id)a1 completion:(id /* block */)a2;

@end
