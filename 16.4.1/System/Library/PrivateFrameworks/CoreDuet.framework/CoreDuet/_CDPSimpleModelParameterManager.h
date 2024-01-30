@class _CDPModelTuningState, NSString, _CDPSimpleModelParameterManagerAccountState;

@interface _CDPSimpleModelParameterManager : NSObject <_CDSocialInteractionAdvisorTuningDelegate> {
    _CDPSimpleModelParameterManagerAccountState *_accountState;
    NSString *_accountStateKey;
}

@property (readonly, nonatomic) _CDPModelTuningState *lastTuningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)accountIdentifierForSettings:(id)a0;
- (void)getLambda:(float *)a0 w0:(float *)a1 threshold:(float *)a2;
- (void)loadAccountState;
- (void)modelTuner:(id)a0 heartBeatWithlambda:(float)a1 w0:(float)a2 threshold:(float)a3 score:(float)a4 progress:(float)a5;
- (void)modelTunerWillResume:(id)a0;
- (void)modelTunerWillStop:(id)a0;
- (void)saveAccountState;

@end
