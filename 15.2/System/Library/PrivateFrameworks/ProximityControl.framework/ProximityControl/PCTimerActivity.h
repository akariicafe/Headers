@interface PCTimerActivity : NSUserActivity <PCActivity>

- (id)displayTitle;
- (id)activityString;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (BOOL)isValid;
- (unsigned long long)pcactivityType;
- (double)timeLeft;
- (id)initFromTimer:(id)a0;

@end
