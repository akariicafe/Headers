@class NSString, NSMutableArray;

@interface InpaintingExecutionContext : NSObject {
    NSMutableArray *processingResolutions;
    NSMutableArray *executionTimes;
}

@property int lastNumberOfTilesUsed;
@property (retain) NSString *lastModelResourceUsed;
@property int lastInpaintingModeUsed;

- (int)lastProcessingResolution;
- (double)lastExecutionTime;
- (id)executionTimesLog;
- (id)init;
- (id)processingResolutionsLog;
- (id)CIImageProcessorDigestObject;
- (void)dealloc;
- (int)filterProcessingCount;
- (void)appendProcessingResolution:(int)a0 andTime:(double)a1;

@end
