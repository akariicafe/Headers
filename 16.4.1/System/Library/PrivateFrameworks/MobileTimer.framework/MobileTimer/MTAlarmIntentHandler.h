@class MTAlarmManager;

@interface MTAlarmIntentHandler : NSObject

@property (readonly, nonatomic) MTAlarmManager *alarmManager;

+ (id)createUserInfoWithIntentName:(id)a0 alarmIDString:(id)a1 time:(id)a2 label:(id)a3;

- (id)initWithAlarmManager:(id)a0;
- (void).cxx_destruct;

@end
