@interface PCAlarmActivity : NSUserActivity <PCActivity>

- (id)fireDate;
- (BOOL)isValid;
- (id)description;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (id)image;
- (id)title;
- (id)activityString;
- (unsigned long long)pcactivityType;
- (id)initFromAlarm:(id)a0;

@end
