@interface PCTimerActivity : NSUserActivity <PCActivity>

- (id)fireDate;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)displayTitle;
- (id)bundleIdentifier;
- (id)activityString;
- (id)description;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;
- (id)initFromTimer:(id)a0;
- (double)timeLeft;

@end
