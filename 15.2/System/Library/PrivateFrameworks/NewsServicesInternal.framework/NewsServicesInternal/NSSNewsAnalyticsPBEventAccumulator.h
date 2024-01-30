@class NSMutableArray, NSSNewsAnalyticsEnvelopeDescriptor;
@protocol NSSNewsAnalyticsSessionManager;

@interface NSSNewsAnalyticsPBEventAccumulator : NSObject <NSSNewsAnalyticsPBEventStreamObserver>

@property (readonly, copy, nonatomic) NSSNewsAnalyticsEnvelopeDescriptor *envelopeDescriptor;
@property (readonly, weak, nonatomic) id<NSSNewsAnalyticsSessionManager> sessionManager;
@property (readonly, nonatomic) NSMutableArray *events;

- (void)observeEvents:(id)a0;
- (void)observeEvent:(id)a0;
- (id)initWithEnvelopeDescriptor:(id)a0 sessionManager:(id)a1;
- (void).cxx_destruct;
- (id)dequeueEventsIntoEnvelope;
- (id)init;

@end
