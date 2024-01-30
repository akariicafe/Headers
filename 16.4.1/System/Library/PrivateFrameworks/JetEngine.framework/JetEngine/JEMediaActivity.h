@interface JEMediaActivity : NSObject {
    void /* unknown type, empty encoding */ pipelineHandler;
}

@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic, retain) void /* unknown type, empty encoding */ playlistItem;
@property (nonatomic, readonly) BOOL isStopped;

- (id)init;
- (void).cxx_destruct;
- (id)eventDataForTransitioningEvents;
- (id)initWithType:(long long)a0 playlistItem:(id)a1 pipeline:(id)a2 topic:(id)a3;
- (unsigned long long)positionWithOverallPosition:(unsigned long long)a0;
- (void)postProcessedStartMetricsFieldsWithCompletion:(id /* block */)a0;
- (void)postProcessedStopMetricsFieldsWithCompletion:(id /* block */)a0;
- (id)startMetricsFields;
- (void)startedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3 transitioningEventData:(id)a4;
- (id)stopMetricsFields;
- (void)stoppedAtOverallPosition:(unsigned long long)a0 type:(id)a1 reason:(id)a2 eventData:(id)a3 transitioningEventData:(id)a4;

@end
