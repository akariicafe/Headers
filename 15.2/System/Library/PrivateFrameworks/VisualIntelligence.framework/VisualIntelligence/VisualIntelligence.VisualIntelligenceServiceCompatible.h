@class _TtC18VisualIntelligence23OntologyGraphCompatible;

@interface VisualIntelligence.VisualIntelligenceServiceCompatible : NSObject {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ cancellables;
}

@property (nonatomic, readonly) _TtC18VisualIntelligence23OntologyGraphCompatible *ontologyGraph;

+ (unsigned long long)parseFlowCacheVersion;

- (void).cxx_destruct;
- (id)init;
- (id)searchWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)initWithTimeoutInterval:(long long)a0;
- (id)parseWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)parseCachedWithVisualQuery:(id)a0 cachedResults:(id)a1 completion:(id /* block */)a2;
- (id)searchWithImage:(id)a0 visualUnderstanding:(id)a1 queryContext:(id)a2 completion:(id /* block */)a3;
- (id)detectWithImage:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (void)clearCacheWithCacheOption:(long long)a0;

@end
