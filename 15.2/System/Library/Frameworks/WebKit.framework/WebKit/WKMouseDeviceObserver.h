@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WKMouseDeviceObserver : NSObject <BKSMousePointerDeviceObserver> {
    unsigned long long _startCount;
    struct RetainPtr<id<BSInvalidatable>> { void *m_ptr; } _token;
    struct OSObjectPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *m_ptr; } _deviceObserverTokenQueue;
}

@property (readonly, nonatomic) BOOL hasMouseDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)_setHasMouseDeviceForTesting:(BOOL)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)mousePointerDevicesDidChange:(id)a0;
- (id).cxx_construct;
- (void)stop;

@end
