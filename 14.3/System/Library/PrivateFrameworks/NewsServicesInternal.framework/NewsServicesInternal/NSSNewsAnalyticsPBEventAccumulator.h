@class NSMutableArray, NSSNewsAnalyticsEnvelopeDescriptor;
@protocol NSSNewsAnalyticsSessionManager;

@interface NSSNewsAnalyticsPBEventAccumulator : NSObject <NSSNewsAnalyticsPBEventStreamObserver>

@property (readonly, copy, nonatomic) NSSNewsAnalyticsEnvelopeDescriptor *envelopeDescriptor;
@property (readonly, weak, nonatomic) id<NSSNewsAnalyticsSessionManager> sessionManager;
@property (readonly, nonatomic) NSMutableArray *events;

- (id)init;
- (void).cxx_destruct;
- (void)observeEvent:(id)a0;
- (id)dequeueEventsIntoEnvelope;
- (void)observeEvents:(id)a0;
- (id)initWithEnvelopeDescriptor:(id)a0 sessionManager:(id)a1;

@end
