@class NSObject;
@protocol OS_dispatch_queue, CMContinuityCaptureThermalMonitorDelegate;

@interface CMContinuityCaptureThermalMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<CMContinuityCaptureThermalMonitorDelegate> _delegate;
    int _registrationToken;
    unsigned long long _thermalLevel;
}

@property (readonly) unsigned long long thermalLevel;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_thermalNotification:(unsigned long long)a0;

@end
