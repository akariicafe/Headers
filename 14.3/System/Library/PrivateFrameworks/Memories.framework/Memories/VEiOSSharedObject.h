@interface VEiOSSharedObject : NSObject

+ (id)sharedInstance;
+ (void)purgeSharedInstance;
+ (BOOL)sharedInstanceExists;

@end
