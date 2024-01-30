@class MPCPlaybackEngineEventStream, NSString;

@interface _MPCPlaybackEngineEventStreamDeferralAssertion : NSObject <MPCPlaybackEngineEventStreamDeferralAssertion>

@property (readonly, weak, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithEventStream:(id)a0 reason:(id)a1;

@end
