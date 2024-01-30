@class NSString, NFStateMachine;

@interface SXVideoAdStateManager : NSObject <SXVideoAdStateProviding, SXVideoAdStateReporting>

@property (readonly, nonatomic) NFStateMachine *stateMachine;
@property (copy, nonatomic, setter=onPlay:) id /* block */ onPlayBlock;
@property (copy, nonatomic, setter=onPause:) id /* block */ onPauseBlock;
@property (copy, nonatomic, setter=onResume:) id /* block */ onResumeBlock;
@property (copy, nonatomic, setter=onFail:) id /* block */ onFailBlock;
@property (copy, nonatomic, setter=onFinish:) id /* block */ onFinishBlock;
@property (copy, nonatomic, setter=onLearnMore:) id /* block */ onLearnMoreBlock;
@property (copy, nonatomic, setter=onSkip:) id /* block */ onSkipBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void)pause;
- (void)skip;
- (void)failWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)play;
- (void)resume;
- (void)learnMore;

@end
