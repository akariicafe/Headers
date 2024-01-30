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

- (id).cxx_construct;
- (void)mousePointerDevicesDidChange:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)stop;
- (id)init;
- (void)start;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_setHasMouseDeviceForTesting:(BOOL)a0;

@end
