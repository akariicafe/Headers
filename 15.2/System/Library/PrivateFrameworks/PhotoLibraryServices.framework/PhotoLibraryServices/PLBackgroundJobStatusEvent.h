@class NSString, NSDate;

@interface PLBackgroundJobStatusEvent : NSObject

@property (retain) NSDate *eventTimestamp;
@property (readonly) NSString *statusDump;

- (void).cxx_destruct;

@end
