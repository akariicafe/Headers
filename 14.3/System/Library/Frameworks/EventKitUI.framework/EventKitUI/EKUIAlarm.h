@class EKAlarm;

@interface EKUIAlarm : NSObject

@property (readonly, nonatomic) BOOL isLeaveNowAlarm;
@property (readonly, nonatomic) EKAlarm *alarm;

- (void).cxx_destruct;
- (id)localizedDescriptionAllDay:(BOOL)a0;
- (id)description;
- (id)initLeaveNowAlarm;
- (BOOL)isEqualToUIAlarm:(id)a0;
- (id)initWithAlarm:(id)a0;

@end
