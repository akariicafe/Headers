@interface PCTelephonyActivity : NSUserActivity <PCActivity>

- (BOOL)isValid;
- (id)description;
- (id)dateConnected;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (id)image;
- (id)displayName;
- (id)activityString;
- (unsigned long long)pcactivityType;
- (id)initFromSensitiveCall:(id)a0;
- (id)initFromKnownCall:(id)a0;

@end
