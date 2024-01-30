@class NSObject;
@protocol OS_dispatch_queue, OS_os_log, PXStoryMediaAnalyzer;

@interface PXStoryMediaAnalysisMovieHighlightsProducer : NSObject <PXStoryMovieHighlightsProducer> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_results_queue;
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) id<PXStoryMediaAnalyzer> mediaAnalyzer;
@property (nonatomic) unsigned long long batchSize;

- (void)waitUntilScheduled;
- (id)init;
- (void).cxx_destruct;
- (id)_requestMovieCurationForAssets:(id)a0 completionHandler:(id /* block */)a1;
- (void)_requestMovieHighlightsForAssets:(id)a0 partialCollection:(id)a1 options:(unsigned long long)a2 resultHandler:(id /* block */)a3;
- (id)requestMovieHighlightsForAssets:(id)a0 partialCollection:(id)a1 options:(unsigned long long)a2 resultHandler:(id /* block */)a3;

@end
