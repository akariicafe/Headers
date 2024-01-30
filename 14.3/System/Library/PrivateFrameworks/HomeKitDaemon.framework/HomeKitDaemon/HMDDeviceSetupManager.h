@protocol HMFLocking;

@interface HMDDeviceSetupManager : HMFObject {
    id<HMFLocking> _lock;
    int _proxSetupNotificationToken;
}

@property (readonly, getter=isRunning) BOOL running;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)followUpController;
- (void)startAdvertising;
- (void)stopAdvertising;

@end
