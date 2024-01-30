@interface SBBulletinSystemStateAdapter : NSObject {
    BOOL _quietModeEnabled;
}

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (id)init;
- (void)dealloc;
- (void)_lockStateChanged:(id)a0;
- (void)_sendCurrentUILockedStatus;

@end
