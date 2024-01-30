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

- (void)dealloc;
- (id)init;
- (void)setPowerHandler:(id /* block */)a0;

@end
