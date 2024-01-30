@class NSString, AFMyriadContext, AFMyriadGoodnessScoreOverrideState, AFMyriadPerceptualAudioHash;

@interface _AFMyriadContextMutation : NSObject <AFMyriadContextMutating> {
    AFMyriadContext *_baseModel;
    unsigned long long _timestamp;
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;
    AFMyriadGoodnessScoreOverrideState *_overrideState;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTimestamp : 1; unsigned char hasPerceptualAudioHash : 1; unsigned char hasOverrideState : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setPerceptualAudioHash:(id)a0;
- (void)setOverrideState:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
