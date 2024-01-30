@class HMFUnfairLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMIThermalMonitor : HMFObject {
    struct __IOHIDEventSystemClient { } *_client;
    int _thermalLevelNotificationToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (readonly) NSMutableDictionary *services;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) unsigned long long thermalLevel;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateThermalLevel;
- (BOOL)readValueFromSensor:(int)a0 value:(double *)a1;
- (BOOL)readMaxValue:(double *)a0;

@end
