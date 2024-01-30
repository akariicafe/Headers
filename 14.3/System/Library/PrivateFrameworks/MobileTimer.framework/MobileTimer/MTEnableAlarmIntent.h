@class INObject;

@interface MTEnableAlarmIntent : INIntent

@property (copy, nonatomic) INObject *alarmID;
@property (copy, nonatomic) INObject *time;

@end
