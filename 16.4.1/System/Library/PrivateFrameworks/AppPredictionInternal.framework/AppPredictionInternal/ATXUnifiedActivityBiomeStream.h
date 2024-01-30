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

- (id)transitionPublisherFromStartTime:(double)a0;
- (id)initFromTimeBasedTransitionStream:(id)a0 appLaunchBasedTransitionStream:(id)a1 heuristicTransitionStream:(id)a2 userFocusTransitionStream:(id)a3;
- (id)init;
- (id)_mergeTransitionPublisher:(id)a0 withOthers:(id)a1;
- (id)sessionPublisherFromStartTime:(double)a0;
- (id)efficientCurrentMode;
- (id)_mergeTransitionPublishers:(id)a0;
- (void).cxx_destruct;

@end
