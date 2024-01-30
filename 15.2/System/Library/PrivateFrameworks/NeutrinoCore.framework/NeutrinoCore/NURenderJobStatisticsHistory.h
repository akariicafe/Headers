@class NSString, NURenderJobStatisticsHistogram;

@interface NURenderJobStatisticsHistory : NSObject {
    double _prevCreatedTime;
    unsigned long long _creationsHead;
    unsigned long long _creationsSize;
    double _prevDeliveredTime;
    unsigned long long _deliveriesHead;
    unsigned long long _deliveriesSize;
}

@property (class, readonly) double totalSchedulerTimeExecutingPrepare;
@property (class, readonly) double totalSchedulerTimeExecutingRender;
@property (class, readonly) double totalSchedulerTimeExecutingComplete;
@property (class, readonly) double totalSchedulerTimeExecuting;
@property (class, readonly) unsigned long long totalSchedulerCanceledJobCount;
@property (class, readonly) unsigned long long totalSchedulerDeliveredJobCount;
@property (class, readonly) unsigned long long totalSchedulerJobCount;

@property (readonly) NSString *jobRequestName;
@property (readonly) NURenderJobStatisticsHistogram *histogram;
@property (readonly) double totalTimeExecutingPrepare;
@property (readonly) double totalTimeExecutingRender;
@property (readonly) double totalTimeExecutingComplete;
@property (readonly) double totalTimeExecuting;
@property (readonly) unsigned long long rollingHistoryMaxSize;
@property (readonly) double *timeBetweenJobCreations;
@property (readonly) double *timeBetweenJobDeliveries;
@property (readonly) unsigned long long canceledJobsCount;
@property (readonly) unsigned long long deliveredJobsCount;
@property (readonly) unsigned long long jobCount;

+ (void)setTotalSchedulerTimeExecuting:(double)a0;
+ (void)setTotalSchedulerTimeExecutingComplete:(double)a0;
+ (void)setTotalSchedulerTimeExecutingRender:(double)a0;
+ (void)setTotalSchedulerTimeExecutingPrepare:(double)a0;
+ (void)setTotalSchedulerDeliveredJobCount:(unsigned long long)a0;
+ (void)setTotalSchedulerCanceledJobCount:(unsigned long long)a0;
+ (void)setTotalSchedulerJobCount:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)recordJobCreated;
- (id)initHistoryForJobsWithName:(id)a0 rollingHistoryMaxSize:(unsigned long long)a1;
- (void)addStatisticsToHistory:(id)a0 wasCanceled:(BOOL)a1;

@end
