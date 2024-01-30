@class NSObject;
@protocol PMDeviceLockMonitorDelegate, OS_dispatch_queue;

@interface PMDeviceLockMonitor : NSObject {
    int _lockStateNotifyToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property BOOL deviceUnlockedSinceBoot;
@property BOOL protectedDataAvailable;
@property (weak) id<PMDeviceLockMonitorDelegate> delegate;
@property (weak) NSObject<OS_dispatch_queue> *delegateQueue;

+ (id)sharedInstance;
+ (id)log;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_deviceLockSetupNotification;
- (void)setDelegate:(id)a0 delegateQueue:(id)a1;

@end
