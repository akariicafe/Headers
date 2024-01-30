@interface PCMediaActivity : NSUserActivity <PCActivity>

- (BOOL)isValid;
- (id)description;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (id)image;
- (id)activityString;
- (unsigned long long)pcactivityType;
- (id)artWork;
- (id)initWithDisplayContext:(id)a0;

@end
