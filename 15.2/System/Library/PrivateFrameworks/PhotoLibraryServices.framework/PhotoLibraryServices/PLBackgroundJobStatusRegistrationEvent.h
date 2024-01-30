@class NSArray;

@interface PLBackgroundJobStatusRegistrationEvent : PLBackgroundJobStatusEvent

@property BOOL registeredActivity;
@property long long registeredPriority;
@property (retain) NSArray *workersResponsible;

- (void).cxx_destruct;
- (id)statusDump;

@end
