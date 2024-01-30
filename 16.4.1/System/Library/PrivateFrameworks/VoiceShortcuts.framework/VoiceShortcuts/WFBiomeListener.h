@class NSMutableDictionary, VCTriggerEventQueue, NSObject;
@protocol OS_dispatch_queue;

@interface WFBiomeListener : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) VCTriggerEventQueue *eventQueue;
@property (readonly, nonatomic) NSMutableDictionary *triggerIDToSinks;

- (id)initWithEventQueue:(id)a0;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)queue_fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)queue_handleEvent:(id)a0 forTrigger:(id)a1;
- (void)queue_unregisterConfiguredTriggerWithIdentifier:(id)a0;
- (void)registerConfiguredTrigger:(id)a0 completion:(id /* block */)a1;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)a0;

@end
