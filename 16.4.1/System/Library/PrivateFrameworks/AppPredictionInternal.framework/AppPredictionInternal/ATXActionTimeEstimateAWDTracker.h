@class _ATXDuetHelper;

@interface ATXActionTimeEstimateAWDTracker : NSObject {
    _ATXDuetHelper *_duetHelper;
}

- (id)initWithDuetHelper:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_queryStartTime;
- (id)_createTimeEstimateContainers:(id)a0 withSessionLengths:(id)a1 withSessionIndices:(id)a2 withParameterSet:(id)a3 withLaunchReasons:(id)a4 withNoMatchCount:(id)a5 forActionType:(unsigned long long)a6;
- (id)_defaultActionTimeEstimateTimestampPath;
- (id)_effectiveEndDateFor:(id)a0;
- (id)_effectiveStartDateFor:(id)a0;
- (id)_getActionKeyFor:(id)a0;
- (id)_readTimestamp;
- (void)_writeTimestamp:(id)a0;
- (id)getTimeEstimatesFor:(id)a0 forAppLaunches:(id)a1 withActionType:(unsigned long long)a2;
- (void)logActionTimeEstimatesWithActivity:(id)a0;
- (void)logActionTimeEstimatesWithStartDate:(id)a0 endDate:(id)a1;
- (void)logActionTimeEstimatesWithStartDate:(id)a0 endDate:(id)a1 withActivity:(id)a2;
- (void)postTimeEstimates:(id)a0;

@end
