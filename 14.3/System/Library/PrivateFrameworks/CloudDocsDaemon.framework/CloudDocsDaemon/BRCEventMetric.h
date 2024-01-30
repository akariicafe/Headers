@class NSString, CKEventMetric, NSDate;

@interface BRCEventMetric : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) BOOL isCKMetric;
@property (readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0;
- (id)description;
- (void)associateWithCompletedOperation:(id)a0;
- (id)additionalPayload;
- (id)subDescription;

@end
