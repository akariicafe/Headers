@class NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureThermalMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _registrationToken;
    id /* block */ _thermalHandler;
    struct OpaqueFigSimpleMutex { } *_thermalNotificationLock;
    float _maxTorchLevel;
    int _thermalLevel;
}

@property (readonly) float maxTorchLevel;
@property (readonly) int thermalLevel;

+ (void)initialize;

- (void)dealloc;
- (void)setThermalHandler:(id /* block */)a0;
- (id)init;

@end
