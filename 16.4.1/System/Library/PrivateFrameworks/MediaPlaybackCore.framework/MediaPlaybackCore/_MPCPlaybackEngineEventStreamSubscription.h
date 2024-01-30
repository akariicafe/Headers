@class MPCPlaybackEngineEventStream, NSString, NSMutableDictionary;
@protocol MPCPlaybackEngineEventConsumer;

@interface _MPCPlaybackEngineEventStreamSubscription : NSObject <MPCPlaybackEngineEventStreamSubscription> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<MPCPlaybackEngineEventConsumer> consumer;
@property (readonly, weak, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly, copy, nonatomic) NSString *streamID;
@property (nonatomic) unsigned long long lastEventSuccessTimestamp;
@property (nonatomic) unsigned long long maximumEventDeliveryTimestamp;
@property (readonly, nonatomic) NSMutableDictionary *mutatingEventHandlers;
@property (readonly, nonatomic) NSMutableDictionary *eventHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_onQueue_flush;
- (void)flushEventsWithCompletion:(id /* block */)a0;
- (void)subscribeToEventType:(id)a0 handler:(id /* block */)a1;
- (id)initWithConsumer:(id)a0 eventStream:(id)a1;
- (void)cancelSubscription;
- (void)subscribeToEventType:(id)a0 options:(unsigned long long)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;

@end
