@class NSString;

@interface PLBackgroundJobStatusStartWorkerEvent : PLBackgroundJobStatusEvent

@property (retain) NSString *worker;
@property unsigned long long jobsCount;

- (id)statusDump;
- (void).cxx_destruct;

@end
