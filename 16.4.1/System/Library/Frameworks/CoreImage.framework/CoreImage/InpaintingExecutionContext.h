@class NSString, NSMutableArray;

@interface InpaintingExecutionContext : NSObject {
    NSMutableArray *processingResolutions;
    NSMutableArray *executionTimes;
}

@property int lastNumberOfTilesUsed;
@property (retain) NSString *lastModelResourceUsed;
@property int lastInpaintingModeUsed;

- (int)filterProcessingCount;
- (id)processingResolutionsLog;
- (double)lastExecutionTime;
- (id)CIImageProcessorDigestObject;
- (id)executionTimesLog;
- (void)dealloc;
- (void)appendProcessingResolution:(int)a0 andTime:(double)a1;
- (id)init;
- (int)lastProcessingResolution;

@end
