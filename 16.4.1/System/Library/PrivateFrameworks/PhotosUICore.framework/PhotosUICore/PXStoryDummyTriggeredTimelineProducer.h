@class PXStoryDummyTimelineProducer, PXStoryTimelineProducerConfiguration;

@interface PXStoryDummyTriggeredTimelineProducer : NSObject <PXStoryTimelineProducer>

@property (readonly, nonatomic) PXStoryDummyTimelineProducer *timelineProducer;
@property (nonatomic) long long currentIteration;
@property (retain, nonatomic) PXStoryTimelineProducerConfiguration *configuration;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (readonly, nonatomic) long long numberOfIterations;

- (void)trigger;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNumberOfIterations:(long long)a0;
- (id)requestTimelineWithConfiguration:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end
