@class NSString, NSDateComponents, NSDate;

@interface NCMutableDigestInfo : NCDigestInfo

@property (copy, nonatomic) NSDateComponents *scheduleTime;
@property (copy, nonatomic) NSDate *scheduleDate;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *headerString;
@property (nonatomic) long long deliveryOrder;

- (void)setTitleString:(id)a0;
- (void)setHeaderString:(id)a0;
- (void)setDeliveryOrder:(long long)a0;
- (void)setScheduleDate:(id)a0;
- (void)setScheduleTime:(id)a0;

@end
