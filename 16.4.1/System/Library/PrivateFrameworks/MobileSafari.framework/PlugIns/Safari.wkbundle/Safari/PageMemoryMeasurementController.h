@class NSTimer, NSArray;

@interface PageMemoryMeasurementController : MeasurementControllerBase {
    NSTimer *_waitForMemoryPressureHandler;
    NSArray *_pagesNeedingMemoryWarningSent;
    int _currentPageIndex;
}

- (void).cxx_destruct;
- (void)_doBeforePageLoad;
- (id)_memoryUsage:(BOOL)a0;
- (void)_postPageLoadEnd;
- (void)_waitForMemoryPressureHandlerTimerFired:(id)a0;
- (id)initWithPluginPageContextController:(id)a0 pagesNeedingMemoryWarningSent:(id)a1;

@end
