@class NSString, ATXAppLaunchInferredModeSessionBiomeStream;

@interface ATXAppLaunchBasedInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol> {
    ATXAppLaunchInferredModeSessionBiomeStream *_modeSessionStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sessionPublisherFromStartTime:(double)a0;
- (id)initWithInferredModeSessionStream:(id)a0;
- (id)transitionPublisherFromStartTime:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
