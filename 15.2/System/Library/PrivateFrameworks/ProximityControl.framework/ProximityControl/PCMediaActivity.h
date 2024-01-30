@interface PCMediaActivity : NSUserActivity <PCActivity>

+ (id)titleForContentItem:(id)a0;
+ (id)userActivityInfoFor:(id)a0 inContext:(id)a1;

- (id)shortDescription;
- (long long)mediaType;
- (id)activityString;
- (id)description;
- (long long)behavior;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (long long)direction;
- (id)bundleIdentifier;
- (unsigned int)playbackState;
- (id)initWithActivity:(id)a0;
- (BOOL)isValid;
- (unsigned long long)pcactivityType;
- (id)artWork;
- (id)initWithDisplayContext:(id)a0 response:(id)a1;

@end
