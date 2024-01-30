@class NSObject;
@protocol OS_dispatch_queue;

@interface FPSupport_VideoRangeSingleton : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQ;
}

+ (id)sharedFPSupportSingleton;

- (id)init;
- (void)dealloc;
- (void)postNotification;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
