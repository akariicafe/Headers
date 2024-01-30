@class NSDate;

@interface HMAccessoryLastSeenStatus : NSObject

@property (readonly, copy, nonatomic) NSDate *lastSeendDate;
@property (readonly, nonatomic) unsigned long long lowBatteryStatus;

- (void).cxx_destruct;
- (id)initWithLastSeenDate:(id)a0 batteryStatus:(unsigned long long)a1;

@end
