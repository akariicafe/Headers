@interface SBVODController : NSObject

+ (id)sharedInstance;

- (void)_launchIPodIfNecessary;
- (id)init;
- (void)dealloc;

@end
