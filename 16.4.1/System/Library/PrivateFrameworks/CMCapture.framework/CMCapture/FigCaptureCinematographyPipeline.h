@class BWRealtimeCinematographyNode, NSString, BWFusionTrackerNode, BWVideoDepthNode;

@interface FigCaptureCinematographyPipeline : FigCapturePipeline {
    BWVideoDepthNode *_videoDepthNode;
    BWFusionTrackerNode *_trackerNode;
    BWRealtimeCinematographyNode *_cinematographyNode;
    NSString *_sourceID;
}

+ (void)initialize;

- (void)dealloc;

@end
