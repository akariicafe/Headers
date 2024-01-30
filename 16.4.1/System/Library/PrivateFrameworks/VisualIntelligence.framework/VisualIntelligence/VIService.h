@class _TtC18VisualIntelligence35VisualIntelligenceServiceCompatible, _TtC18VisualIntelligence26VITextLookupFlowCompatible;

@interface VIService : NSObject {
    _TtC18VisualIntelligence35VisualIntelligenceServiceCompatible *_compatService;
    _TtC18VisualIntelligence26VITextLookupFlowCompatible *_textLookupFlow;
}

+ (unsigned long long)parseFlowCacheVersion;

- (id)init;
- (void).cxx_destruct;
- (id)ontologyGraph;
- (id)lookupTextWithQuery:(id)a0 completion:(id /* block */)a1;
- (id)refineRegionsWithRequest:(id)a0 error:(id *)a1;
- (void)clearCacheWithOption:(long long)a0;
- (id)parseWithVisualQuery:(id)a0 cachedResults:(id)a1 completion:(id /* block */)a2;
- (id)searchWithParsedVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)searchWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)submitUserFeedback:(id)a0 completion:(id /* block */)a1;
- (id)initWithNetworkTimeoutInterval:(long long)a0;
- (id)detectWithImage:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (id)newStreamingSession;
- (id)parseWithVisualQuery:(id)a0 cachedResult:(id)a1 completion:(id /* block */)a2;
- (id)parseWithVisualQuery:(id)a0 completion:(id /* block */)a1;
- (id)pegasusPayloadWithParsedVisualQuery:(id)a0 error:(id *)a1;

@end
