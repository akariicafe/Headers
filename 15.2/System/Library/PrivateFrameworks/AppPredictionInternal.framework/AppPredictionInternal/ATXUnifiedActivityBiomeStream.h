@class ATXTimeBasedInferredActivityBiomeStream, NSString, ATXAppLaunchBasedInferredActivityBiomeStream, ATXUserFocusComputedActivityBiomeStream, ATXHeuristicInferredActivityBiomeStream;

@interface ATXUnifiedActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol> {
    ATXTimeBasedInferredActivityBiomeStream *_timeBasedInferredActivityStream;
    ATXAppLaunchBasedInferredActivityBiomeStream *_appLaunchInferredActivityStream;
    ATXHeuristicInferredActivityBiomeStream *_heuristicInferredActivityStream;
    ATXUserFocusComputedActivityBiomeStream *_userFocusComputedActivityStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sessionPublisherFromStartTime:(double)a0;
- (id)transitionPublisherFromStartTime:(double)a0;
- (id)efficientCurrentMode;
- (void).cxx_destruct;
- (id)_mergeTransitionPublisher:(id)a0 withOthers:(id)a1;
- (id)init;
- (id)initFromTimeBasedTransitionStream:(id)a0 appLaunchBasedTransitionStream:(id)a1 heuristicTransitionStream:(id)a2 userFocusTransitionStream:(id)a3;
- (id)_mergeTransitionPublishers:(id)a0;

@end
