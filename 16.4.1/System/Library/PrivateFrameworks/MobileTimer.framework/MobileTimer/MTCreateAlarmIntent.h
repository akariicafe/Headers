@class NSString, INObject, NSArray, NSDateComponents;

@interface MTCreateAlarmIntent : INIntent

@property (copy, nonatomic) INObject *time;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDateComponents *dateComponents;
@property (nonatomic) long long requiresAppLaunch;
@property (copy, nonatomic) NSArray *repeatSchedule;

@end
