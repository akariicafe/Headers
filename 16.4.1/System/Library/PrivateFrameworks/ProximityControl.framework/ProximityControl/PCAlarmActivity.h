@interface PCAlarmActivity : NSUserActivity <PCActivity>

- (id)fireDate;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)bundleIdentifier;
- (id)title;
- (id)activityString;
- (id)description;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;
- (id)initFromAlarm:(id)a0;

@end
