@class HKObserverSet, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface HKWristDetectionSettingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _disableWristDetectionChangedNotificationToken;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    int _disableWristDetectionSettingChangeNotificationToken;
}

@property (readonly, nonatomic) BOOL isWristDetectEnabled;

+ (BOOL)isWristDetectEnabled;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_startObserving;
- (void)unregisterObserver:(id)a0;
- (void)_queue_notifyObservers;
- (void)_stopObserving;

@end
