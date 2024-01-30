@class NSString, NSMutableArray;

@interface InpaintingExecutionContext : NSObject {
    NSMutableArray *processingResolutions;
    NSMutableArray *executionTimes;
}

@property int lastNumberOfTilesUsed;
@property (retain) NSString *lastModelResourceUsed;
@property int lastInpaintingModeUsed;

- (id)init;
- (void)dealloc;
- (int)filterProcessingCount;
- (id)CIImageProcessorDigestObject;
- (int)lastProcessingResolution;
- (double)lastExecutionTime;
- (void)appendProcessingResolution:(int)a0 andTime:(double)a1;
- (id)processingResolutionsLog;
- (id)executionTimesLog;

@end
