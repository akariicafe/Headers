@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DNDSXPCEventStream : NSObject {
    NSMutableDictionary *_timerHandlersByToken;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)setTimer:(id)a0;
- (void)registerTimerHandlerWithServiceIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)start;
- (void).cxx_destruct;
- (id)init;

@end
