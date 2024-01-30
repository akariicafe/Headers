@class NSString, NSDate;

@interface WiFiUsageLQMPreceedingTrigger : NSObject

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *reason;

- (id)description;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 andTimestamp:(id)a1;

@end
