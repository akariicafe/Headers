@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CMActivityManagerInternal : NSObject {
    void *fLocationdConnection;
    id /* block */ fActivityHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    BOOL fSubscribedToMotionState;
    NSObject<OS_dispatch_semaphore> *fSidebandOverrideSemaphore;
    NSObject<OS_dispatch_queue> *fSidebandOverrideQueue;
    BOOL fSidebandOverrideWaiting;
    long long fSidebandOverrideResult;
    NSObject<OS_dispatch_semaphore> *fMotionStateSimSemaphore;
    NSObject<OS_dispatch_queue> *fMotionStateSimQueue;
    BOOL fMotionStateSimWaiting;
    long long fMotionStateSimResult;
    long long fMotionStateYouthSimResult;
}

- (void)connect;
- (void)disconnect;
- (void)startActivityUpdatesWithHandlerPrivate:(id /* block */)a0;
- (void)stopActivityUpdatesPrivate;
- (void)overrideOscarSideband:(BOOL)a0 withState:(long long)a1;
- (void)simulateMotionState:(BOOL)a0 withState:(long long)a1;
- (void)simulateMotionStateYouthWithState:(long long)a0;
- (id)init;
- (void)dealloc;

@end
