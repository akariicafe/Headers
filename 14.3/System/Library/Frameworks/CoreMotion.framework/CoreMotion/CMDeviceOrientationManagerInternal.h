@class NSOperationQueue, NSObject;
@protocol OS_dispatch_semaphore;

@interface CMDeviceOrientationManagerInternal : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSampleLock;
    struct Dispatcher { void /* function */ **x0; id x1; } *fDeviceOrientationDispatcher;
    id /* block */ fDeviceOrientationHandler;
    NSOperationQueue *fDeviceOrientationQueue;
    NSObject<OS_dispatch_semaphore> *fDeviceOrientationSemaphore;
    BOOL fDidSignalSemaphore;
    int fOrientationCallbackMode;
    BOOL fEnableOrientationNotification;
    struct Sample { double timestamp; int orientation; } fLatestDeviceOrientationSample;
    struct Sample { double timestamp; int orientation; } fLastSignificantOrientationSample;
}

- (id)init;
- (void)dealloc;

@end
