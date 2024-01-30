@class NPTPerformanceTest;

@interface SpeedTestConfig : NSObject {
    BOOL inProgress;
    NPTPerformanceTest *performanceTest;
}

- (void)abort;
- (BOOL)inProgress;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startDownloadTest:(id /* block */)a0;

@end
