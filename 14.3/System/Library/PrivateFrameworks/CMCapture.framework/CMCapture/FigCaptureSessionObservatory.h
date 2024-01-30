@class NSObject, NSMapTable, NSHashTable;
@protocol OS_dispatch_queue;

@interface FigCaptureSessionObservatory : NSObject {
    NSMapTable *_captureSessionsStorage;
    NSHashTable *_registeredObservers;
    NSObject<OS_dispatch_queue> *_queue;
    long long _lastRunningIdentifier;
}

+ (void)initialize;
+ (id)sharedObservatory;

- (void)registerObserver:(id)a0;
- (id)init;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (void)_registerObserver:(id)a0;
- (void)_setRunning:(BOOL)a0 forCaptureSession:(struct OpaqueFigCaptureSession { } *)a1;
- (void)captureSessionWasCreated:(struct OpaqueFigCaptureSession { } *)a0;

@end
