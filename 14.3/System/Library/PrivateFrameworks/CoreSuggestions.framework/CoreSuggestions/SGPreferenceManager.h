@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface SGPreferenceManager : NSObject {
    NSUserDefaults *_suggestionsDefaults;
    NSObject<OS_dispatch_queue> *_settingsUpdateQueue;
    BOOL _isQueueSuspended;
}

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (void)_suspendNotificationQueue;
- (void)_resumeNotificationQueue;
- (int)registerBlock:(id /* block */)a0;

@end
