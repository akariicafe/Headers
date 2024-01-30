@class NSString;

@interface PLBackgroundJobStatusStopWorkerEvent : PLBackgroundJobStatusEvent

@property (retain) NSString *worker;
@property unsigned long long pendingJobsCount;

- (id)statusDump;
- (void).cxx_destruct;

@end
