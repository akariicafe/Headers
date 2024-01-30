@interface SBVODController : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_launchIPodIfNecessary;

@end
