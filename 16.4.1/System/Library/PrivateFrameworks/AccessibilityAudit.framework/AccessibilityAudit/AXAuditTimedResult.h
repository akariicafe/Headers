@class NSString, NSDate;

@interface AXAuditTimedResult : NSObject

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSString *executionTimeString;

- (void).cxx_destruct;
- (id)executionTimeString;

@end
