@class NSCondition, NSMutableArray, NSDate;

@interface DSCallStatisticsAggregator : NSObject {
    struct { int droppedCallCount; int droppedWiFiCallCount; int droppedVoLTECallCount; int placedCallCount; int deviceDroppedCallCount; } _totals;
    struct { int droppedCallCount; int droppedWiFiCallCount; int droppedVoLTECallCount; int placedCallCount; int deviceDroppedCallCount; } _accumulated;
}

@property (nonatomic) BOOL futureDateDetected;
@property (nonatomic) BOOL outOfOrderDateDetected;
@property (readonly, nonatomic) NSDate *referenceDate;
@property (retain, nonatomic) NSMutableArray *callLog;
@property (retain, nonatomic) NSCondition *generationLock;
@property (nonatomic) BOOL generationComplete;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic) long long missingDaysRemaining;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)_getAndValidateDateFromLogLine:(id)a0;
- (long long)_getDaysBetween:(id)a0 and:(id)a1;
- (void)_flushAccumulatedLogDataWithDate:(id)a0;
- (void)_fillCallLogWithMissingDays:(long long)a0 fromDate:(id)a1;
- (BOOL)_isDateInRange:(id)a0;
- (void)_resetAccumulator;
- (void)beginAggregation;
- (id)getSynchronousResult;

@end
