@interface PCTimerActivity : NSUserActivity <PCActivity>

- (BOOL)isValid;
- (id)description;
- (id)displayTitle;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (id)image;
- (id)activityString;
- (unsigned long long)pcactivityType;
- (double)timeLeft;
- (id)initFromTimer:(id)a0;

@end
