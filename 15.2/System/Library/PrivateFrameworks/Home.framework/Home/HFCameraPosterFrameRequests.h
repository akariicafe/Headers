@class NSMutableDictionary;

@interface HFCameraPosterFrameRequests : NSObject

@property (retain, nonatomic) NSMutableDictionary *timelapseRequests;
@property (retain, nonatomic) NSMutableDictionary *generationRequests;

- (void).cxx_destruct;
- (id)init;
- (void)addRequestForTimelapseFileForDelegate:(id)a0 forHighQualityClip:(id)a1 andTimelapseClip:(id)a2 atOffset:(double)a3;
- (id)fulfillRequestsForTimelapseFileForTimelapseClip:(id)a0;
- (void)addRequestsForPosterFrameGeneration:(id)a0 forHighQualityClip:(id)a1;
- (id)fulfillRequestForPosterFrameGenerationForHighQualityClip:(id)a0 atOffset:(double)a1;
- (id)fulfillAllRequestsForPosterFrameGenerationForHighQualityClip:(id)a0;

@end
