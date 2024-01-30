@interface AutoEditLib.PipelineExportController : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ collection;
    void /* unknown type, empty encoding */ memory;
    void /* unknown type, empty encoding */ moodService;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ memoryPublisherOutput;
    void /* unknown type, empty encoding */ blueprint;
    void /* unknown type, empty encoding */ picklistPublisherOutput;
    void /* unknown type, empty encoding */ downloadPublisherOutput;
    void /* unknown type, empty encoding */ durationRangeOutput;
    void /* unknown type, empty encoding */ token;
}

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithCollection:(id)a0 memory:(id)a1 moodService:(id)a2 queue:(id)a3;
- (void)receiveWithRequestedDuration:(double)a0 requestedKeyAsset:(id)a1 requestedBlueprint:(id)a2 requestedSuggestions:(id)a3 requestedTitle:(id)a4 requestedSubtitle:(id)a5 fullPicklist:(id)a6 naturalSize:(struct CGSize { double x0; double x1; })a7 completionHandler:(id /* block */)a8;

@end
