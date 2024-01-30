@class EKAlarm;

@interface EKUIAlarm : NSObject

@property (readonly, nonatomic) BOOL isLeaveNowAlarm;
@property (readonly, nonatomic) EKAlarm *alarm;

- (id)initWithAlarm:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)localizedDescriptionAllDay:(BOOL)a0;
- (id)initLeaveNowAlarm;
- (BOOL)isEqualToUIAlarm:(id)a0;

@end
