@class NSString, BMUserFocusComputedModeStream;

@interface ATXUserFocusComputedActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol> {
    BMUserFocusComputedModeStream *_computedModeStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transitionPublisherFromStartTime:(double)a0;
- (id)_transitionPublisherFromComputedModeStreamPublisher:(id)a0;
- (id)transitionPublisherFromStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)init;
- (id)initFromUserFocusComputedModeStream:(id)a0;
- (id)sessionPublisherFromStartTime:(double)a0;
- (void).cxx_destruct;

@end
