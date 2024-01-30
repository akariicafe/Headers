@interface PCMediaActivity : NSUserActivity <PCActivity>

+ (id)titleForContentItem:(id)a0;
+ (id)userActivityInfoFor:(id)a0 inContext:(id)a1;

- (long long)direction;
- (id)shortDescription;
- (BOOL)isValid;
- (long long)mediaType;
- (long long)behavior;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)bundleIdentifier;
- (id)activityString;
- (id)description;
- (unsigned int)playbackState;
- (id)initWithActivity:(id)a0;
- (unsigned long long)pcactivityType;
- (id)artWork;
- (id)initWithDisplayContext:(id)a0 response:(id)a1;

@end
