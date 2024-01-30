@class PFStoryAutoEditConfiguration;

@interface PXStoryDefaultAutoEditDecisionListsProducerFactory : NSObject <PXStoryAutoEditDecisionListsProducerFactory> {
    PFStoryAutoEditConfiguration *_configuration;
}

- (id)init;
- (void).cxx_destruct;
- (id)autoEditDecisionListsProducerForAssetCollection:(id)a0 displayAssets:(id)a1 movieHighlights:(id)a2 chapterCollection:(id)a3 targetOverallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a4;
- (id)fallbackAutoEditDecisionListsProducer;

@end
