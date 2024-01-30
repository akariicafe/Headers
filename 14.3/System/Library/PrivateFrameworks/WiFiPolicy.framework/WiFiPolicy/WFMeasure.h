@class NPTPerformanceTest, NSObject;
@protocol OS_dispatch_source;

@interface WFMeasure : NSObject {
    BOOL _isInProgress;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NPTPerformanceTest *_performanceTest;
}

- (BOOL)start:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isInProgress;
- (id)initWithType:(int)a0;
- (void)abort;

@end
