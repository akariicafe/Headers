@class NSMutableDictionary;

@interface SBBackgroundMultitaskingManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_appToBackgroundTasks;
}

+ (id)sharedInstance;

- (id)_createBackgroundFetchTaskForAppInfo:(id)a0;
- (void)_backgroundTaskFinished:(id)a0 forAppInfo:(id)a1;
- (void)_appProcessStateDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
