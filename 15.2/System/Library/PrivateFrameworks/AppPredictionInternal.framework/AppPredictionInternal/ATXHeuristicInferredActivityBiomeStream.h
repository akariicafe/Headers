@class NSString, BMInferredModeStream;

@interface ATXHeuristicInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol> {
    BMInferredModeStream *_heuristicEventBiomeStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sessionPublisherFromStartTime:(double)a0;
- (id)transitionPublisherFromStartTime:(double)a0;
- (id)initFromInferredModeStream:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)transitionPublisherFromStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)_transitionPublisherFromInferredModePublisher:(id)a0;

@end
