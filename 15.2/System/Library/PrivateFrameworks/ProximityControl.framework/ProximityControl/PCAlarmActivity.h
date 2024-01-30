@interface PCAlarmActivity : NSUserActivity <PCActivity>

- (id)title;
- (id)activityString;
- (id)fireDate;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (BOOL)isValid;
- (unsigned long long)pcactivityType;
- (id)initFromAlarm:(id)a0;

@end
