@interface PCAnnouncementActivity : NSUserActivity <PCActivity>

- (id)activityString;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)image;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (BOOL)isValid;
- (unsigned long long)pcactivityType;

@end
