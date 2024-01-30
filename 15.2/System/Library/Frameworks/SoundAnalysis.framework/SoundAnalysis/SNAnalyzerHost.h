@class NSString;
@protocol SNTimeConverting, SNAnalyzing;

@interface SNAnalyzerHost : NSObject <SNProcessing> {
    id<SNAnalyzing> _analyzer;
    id<SNTimeConverting> _timeConverter;
    id /* block */ _resultsHandler;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) id sharedProcessorConfiguration;
@property (nonatomic) long long requestState;
@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; } graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })convertTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromBox:(void *)a1 usingConverter:(id)a2;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })convertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 fromBox:(void *)a1 usingConverter:(id)a2;

- (void).cxx_destruct;
- (BOOL)adaptToSystemConfiguration:(id)a0 error:(id *)a1;
- (id)clientResultsFromProcessorResults:(id)a0;
- (id)initWithAnalyzer:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 timeConverter:(id)a3;
- (void)handleDSPGraphPostRenderCallbackFromBox:(void *)a0 numFrames:(int)a1;
- (void)handleAnalyzerCompletion;
- (void)handleAnalyzerError:(id)a0;
- (void)requestDidReturnError:(id)a0;
- (void)primeAnalyzerGraph;

@end
