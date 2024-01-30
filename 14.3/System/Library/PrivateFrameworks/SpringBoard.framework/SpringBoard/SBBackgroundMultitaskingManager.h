@class NSMutableDictionary;

@interface SBBackgroundMultitaskingManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_appToBackgroundTasks;
}

+ (id)sharedInstance;

- (void)_backgroundTaskFinished:(id)a0 forApplication:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_appProcessStateDidChange:(id)a0;
- (id)_createBackgroundFetchTaskForApplication:(id)a0;

@end
