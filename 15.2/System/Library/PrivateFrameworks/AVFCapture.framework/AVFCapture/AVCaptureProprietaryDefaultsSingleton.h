@class NSMutableDictionary, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureProprietaryDefaultsSingleton : NSObject {
    char *_proprietaryDefaultsSourceQueueLabel;
    unsigned long long _proprietaryDefaultsSourceQueueLabelLength;
    NSObject<OS_dispatch_queue> *_proprietaryDefaultsSourceQueue;
    NSObject<OS_dispatch_queue> *_proprietaryDefaultChangeNotificationCallbackQueue;
    struct OpaqueFigCaptureSource { } *_proprietaryDefaultsSource;
    AVWeakReference *_weakReference;
    NSMutableDictionary *_defaultChangedHandlersForObserversForKeys;
}

+ (void)initialize;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0;
+ (void)removeObserver:(id)a0 forKey:(id)a1;
+ (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
+ (void)updateProprietaryDefaultsSource;
+ (id)proprietaryDefaultsSingleton;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)addObserver:(id)a0 forKey:(id)a1 callHandlerForInitialValue:(BOOL)a2 defaultChangedHandler:(id /* block */)a3;
- (void)_updateProprietaryDefaultsSource;
- (void)_runBlockOnProprietaryDefaultsSourceQueue:(id /* block */)a0;
- (void)_handleDefaultChangedNotificationForKey:(id)a0 newValue:(id)a1 callHandlersAsync:(BOOL)a2;

@end
