@class NSString;

@interface PLBackgroundJobStatusFinishWorkerEvent : PLBackgroundJobStatusEvent

@property (retain) NSString *worker;

- (void).cxx_destruct;
- (id)statusDump;

@end
