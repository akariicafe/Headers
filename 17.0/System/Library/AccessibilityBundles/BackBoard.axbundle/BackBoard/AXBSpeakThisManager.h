@class BSProcessDeathWatcher, NSObject;
@protocol OS_dispatch_queue;

@interface AXBSpeakThisManager : NSObject {
    NSObject<OS_dispatch_queue> *_speakThisQueue;
    BSProcessDeathWatcher *_accessibilityUIServerDeathWatcher;
}

+ (void)didUpdateAccessibilityUIServerPID;
+ (void)initializeMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)_notifySpeakThisOfSettingsChange;
- (void)_startWatchingForDeathOfAccessibilityUIServerPID;

@end
