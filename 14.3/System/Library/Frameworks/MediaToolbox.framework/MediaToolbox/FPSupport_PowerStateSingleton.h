@class NSObject;
@protocol OS_dispatch_queue;

@interface FPSupport_PowerStateSingleton : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQ;
}

+ (id)sharedFPSupportPowerStateSingleton;

- (id)init;
- (void)dealloc;
- (void)postNotification;
- (void)_didChangePowerState:(id)a0;

@end
