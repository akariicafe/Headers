@class HKObserverSet, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface HKWristDetectionSettingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    int _disableWristDetectionSettingChangeNotificationToken;
}

@property (retain, nonatomic) id pairedDeviceRegistry;
@property (readonly, nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled;

+ (BOOL)isWristDetectEnabled;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)registerObserver:(id)a0;
- (void)_queue_notifyObservers;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (void)_queue_settingDidChange;
- (void).cxx_destruct;
- (id)init;
- (void)_stopObserving;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (id)initWithPairedDeviceRegistry:(id)a0;
- (void)_startObserving;
- (id)_activeWatchNotifications;

@end
