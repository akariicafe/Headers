@interface MVKPipeline.PipelineController : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ collection;
    void /* unknown type, empty encoding */ memory;
    void /* unknown type, empty encoding */ movieData;
    void /* unknown type, empty encoding */ moodService;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ memoryPublisherOutput;
    void /* unknown type, empty encoding */ blueprint;
    void /* unknown type, empty encoding */ picklistPublisherOutput;
    void /* unknown type, empty encoding */ downloadPublisherOutput;
    void /* unknown type, empty encoding */ durationRangePublisherOutput;
    void /* unknown type, empty encoding */ durationPublisherOutput;
    void /* unknown type, empty encoding */ freezeRangesToPersist;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ secondToken;
}

- (void)persist;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)a0;
- (void)cancel;
- (id)initWithCollection:(id)a0 memory:(id)a1 highlight:(id)a2 moodService:(id)a3 queue:(id)a4;
- (void)receiveWithRequestedDuration:(double)a0 requestedKeyAsset:(id)a1 requestedBlueprint:(id)a2 requestedSuggestions:(id)a3 requestedTitle:(id)a4 requestedSubtitle:(id)a5 fullPicklist:(id)a6 naturalSize:(struct CGSize { double x0; double x1; })a7 fetchedAssets:(id)a8 isAvocado:(BOOL)a9 progressHandler:(id /* block */)a10 completionHandler:(id /* block */)a11;

@end
