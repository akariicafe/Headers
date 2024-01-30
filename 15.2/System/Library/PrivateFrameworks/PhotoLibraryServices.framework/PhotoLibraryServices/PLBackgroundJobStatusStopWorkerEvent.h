@class NSString;

@interface PLBackgroundJobStatusStopWorkerEvent : PLBackgroundJobStatusEvent

@property (retain) NSString *worker;
@property unsigned long long pendingJobsCount;

- (void).cxx_destruct;
- (id)statusDump;

@end
