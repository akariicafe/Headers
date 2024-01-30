@class PXStoryResourcesDataSource, PXStoryMutableConcreteTimeline, PXStoryConcreteSubtimelineScanner;

@interface PXStoryConcreteTimelineParser : NSObject {
    PXStoryMutableConcreteTimeline *_accumulatedBestTimeline;
    PXStoryMutableConcreteTimeline *_nextBestTimeline;
    PXStoryMutableConcreteTimeline *_candidateAccumulatedTimelineWithNextBestTimeline;
}

@property (readonly, nonatomic) PXStoryConcreteSubtimelineScanner *scanner;
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource;
@property (nonatomic) long long preferredInitialDisplayAssetResourceIndex;
@property (nonatomic) double parseTimeLimit;
@property (nonatomic) long long parseCountLimit;
@property (readonly, nonatomic) BOOL isAtEnd;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_adjustTimeline:(id)a0 andAppendTimeline:(id)a1;
- (id)parseNextBestTimeline;

@end
