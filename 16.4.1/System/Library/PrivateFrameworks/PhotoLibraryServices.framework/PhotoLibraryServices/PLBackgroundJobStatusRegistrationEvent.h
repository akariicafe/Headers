@class NSString, NSArray;

@interface PLBackgroundJobStatusRegistrationEvent : PLBackgroundJobStatusEvent

@property BOOL registeredActivity;
@property (retain) NSString *registeredPriorities;
@property (retain) NSArray *workersResponsible;

- (id)statusDump;
- (void).cxx_destruct;

@end
