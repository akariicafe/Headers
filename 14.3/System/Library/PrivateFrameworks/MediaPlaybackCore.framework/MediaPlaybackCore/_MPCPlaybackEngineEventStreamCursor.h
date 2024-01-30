@class MPCPlaybackEngineEventStream, NSUUID, NSString;

@interface _MPCPlaybackEngineEventStreamCursor : NSObject <MPCPlaybackEngineEventStreamCursor>

@property (readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly, copy, nonatomic) NSUUID *startEventIdentifier;
@property (readonly, copy, nonatomic) NSUUID *endEventIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)findPreviousEventWithType:(id)a0 matchingPayload:(id)a1;
- (id)findPreviousEventWithTypes:(id)a0 matchingPayload:(id)a1;
- (id)cursorUntilEvent:(id)a0;
- (long long)countOfPreviousEventsWithType:(id)a0 matchingPayload:(id)a1;
- (void)enumeratePreviousEventsWithTypes:(id)a0 usingBlock:(id /* block */)a1;
- (id)cursorFromEvent:(id)a0 untilEvent:(id)a1;
- (void)enumeratePreviousEventsWithType:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePreviousEventsWithTypes:(id)a0 matchingPayload:(id)a1 usingBlock:(id /* block */)a2;
- (id)initWithEventStream:(id)a0 startEventIdentifier:(id)a1 endEventIdentifier:(id)a2;
- (long long)countOfPreviousEventsWithTypes:(id)a0 matchingPayload:(id)a1;
- (void)enumeratePreviousEventsWithType:(id)a0 matchingPayload:(id)a1 usingBlock:(id /* block */)a2;

@end
