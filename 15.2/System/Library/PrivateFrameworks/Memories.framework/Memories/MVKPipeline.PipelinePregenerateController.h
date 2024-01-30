@interface MVKPipeline.PipelinePregenerateController : NSObject {
    void /* unknown type, empty encoding */ collection;
    void /* unknown type, empty encoding */ memory;
    void /* unknown type, empty encoding */ movieData;
    void /* unknown type, empty encoding */ memoryPublisherOutput;
    void /* unknown type, empty encoding */ blueprint;
    void /* unknown type, empty encoding */ picklistPublisherOutput;
    void /* unknown type, empty encoding */ durationRangeOutput;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ secondToken;
}

- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (id)initWithCollection:(id)a0 memory:(id)a1;
- (void)receiveWithRequestedDuration:(double)a0 requestedKeyAsset:(id)a1 requestedBlueprint:(id)a2 requestedSuggestions:(id)a3 naturalSize:(struct CGSize { double x0; double x1; })a4 queue:(id)a5 completionHandler:(id /* block */)a6;

@end
