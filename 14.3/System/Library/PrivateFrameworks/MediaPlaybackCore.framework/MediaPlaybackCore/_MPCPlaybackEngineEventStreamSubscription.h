@class MPCPlaybackEngineEventStream, NSMutableDictionary, NSString;
@protocol MPCPlaybackEngineEventConsumer;

@interface _MPCPlaybackEngineEventStreamSubscription : NSObject <MPCPlaybackEngineEventStreamSubscription> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<MPCPlaybackEngineEventConsumer> consumer;
@property (readonly, weak, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (nonatomic) unsigned long long lastEventSuccessTimestamp;
@property (readonly, nonatomic) NSMutableDictionary *mutatingEventHandlers;
@property (readonly, nonatomic) NSMutableDictionary *immediateEventHandlers;
@property (readonly, nonatomic) NSMutableDictionary *eventHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)flushEventsWithCompletion:(id /* block */)a0;
- (void)subscribeToEventType:(id)a0 handler:(id /* block */)a1;
- (void)subscribeToEventType:(id)a0 options:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)initWithConsumer:(id)a0 eventStream:(id)a1;
- (void)_onQueue_flush;
- (void)cancelSubscription;

@end
