@class NSString, NSDateFormatter;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCPlaybackEngineLoggingConsumer : NSObject <MPCPlaybackEngineEventConsumer>

@property (class, readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_prefixWithCursor:(id)a0;
- (BOOL)_logAccountEvent:(id)a0 cursor:(id)a1;
- (id)_symbolForCommand:(unsigned int)a0;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
