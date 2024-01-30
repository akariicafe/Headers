@class NSString;

@interface PLBackgroundJobStatusStartWorkerEvent : PLBackgroundJobStatusEvent

@property (retain) NSString *worker;
@property unsigned long long jobsCount;

- (void).cxx_destruct;
- (id)statusDump;

@end
