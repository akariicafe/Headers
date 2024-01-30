@interface SBControlCenterRingerSwitchController : NSObject

+ (id)sharedInstance;

- (void)_updateState;
- (void)dealloc;
- (id)init;

@end
