@class NSObject;
@protocol OS_dispatch_semaphore;

@interface IMEventListener : NSObject

@property (nonatomic) double timerStart;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (weak) id target;
@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ willInvokeCompletion;
@property (copy) id /* block */ didInvokeCompletion;
@property double timeout;
@property (readonly, getter=isListening) BOOL listening;
@property (readonly) double timeListeningStarted;
@property (readonly) double timeListeningStopped;
@property (readonly) double timeLastEventReceived;
@property (readonly) double elapsedWaitingTime;
@property (readonly) unsigned long long eventCount;
@property (nonatomic) BOOL willRepeat;

+ (id)_mutableListenerDictionary;
+ (id)allListeners;
+ (id)eventListener;
+ (id)eventListenerWithNotificationName:(id)a0 object:(id)a1;

- (void)_startListening;
- (void)stopListening;
- (void)_reset;
- (void).cxx_destruct;
- (void)reset;
- (void)startListening;
- (void)_stopListening;
- (void)willReset;
- (void)willStartListening;
- (void)_cancelTimeoutTimer;
- (void)_addToListeners;
- (id)createResult:(BOOL)a0 userInfo:(id)a1 error:(id)a2;
- (void)_invokeCompletion:(BOOL)a0 userInfo:(id)a1 error:(id)a2;
- (void)_startTimeoutTimerIfNeeded;
- (void)_removeFromListeners;
- (void)willStopListening;
- (void)_handleTimeout:(id)a0;
- (void)startListeningForEventTarget:(id)a0 sendStartingEvent:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_dispatchStartEventBlock:(id /* block */)a0;
- (void)waitForCompletion;
- (void)startListeningForEventTarget:(id)a0 completion:(id /* block */)a1;
- (void)_didReceiveEvent:(BOOL)a0 userInfo:(id)a1 error:(id)a2;

@end
