@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMIThermalMonitor : HMFObject {
    struct __IOHIDEventSystemClient { } *_client;
    int _thermalLevelNotificationToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableDictionary *services;
@property (readonly) unsigned long long thermalLevel;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_updateThermalLevel;
- (BOOL)readValueFromSensor:(int)a0 value:(double *)a1;
- (BOOL)readMaxValue:(double *)a0;

@end
