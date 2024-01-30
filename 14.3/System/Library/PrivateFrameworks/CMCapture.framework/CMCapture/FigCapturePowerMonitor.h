@class NSObject;
@protocol OS_dispatch_queue;

@interface FigCapturePowerMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _registrationToken;
    id /* block */ _torchHandler;
    struct OpaqueFigSimpleMutex { } *_maxTorchLevelLock;
    float _maxTorchLevel;
}

@property (readonly) float maxTorchLevel;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_powerNotification:(unsigned int)a0;
- (void)setPowerHandler:(id /* block */)a0;

@end
