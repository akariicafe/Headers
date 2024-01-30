@interface PCAnnouncementActivity : NSUserActivity <PCActivity>

- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)init;
- (id)bundleIdentifier;
- (id)activityString;
- (id)description;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;

@end
