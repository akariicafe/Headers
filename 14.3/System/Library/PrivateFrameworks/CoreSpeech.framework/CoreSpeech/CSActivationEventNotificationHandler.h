@class CSActivationEvent, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSActivationEventNotificationHandler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMapTable *delegates;
@property (retain, nonatomic) CSActivationEvent *pendingActivationEvent;
@property (copy, nonatomic) id /* block */ pendingCompletion;

+ (id)sharedInstance;

- (void)_didReceiveAOPFirstPassTrigger:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (BOOL)_isVoiceTriggerEvent:(id)a0;
- (BOOL)_hasPendingActivationForType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)stop;
- (void)_startMonitoring;
- (void)start;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)setDelegate:(id)a0 forType:(unsigned long long)a1;

@end
