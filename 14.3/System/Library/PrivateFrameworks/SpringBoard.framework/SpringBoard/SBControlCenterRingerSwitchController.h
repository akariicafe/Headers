@interface SBControlCenterRingerSwitchController : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_updateState;

@end
