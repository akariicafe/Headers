@class NSString, AFMyriadContext, AFMyriadPerceptualAudioHash;

@interface _AFMyriadContextMutation : NSObject <AFMyriadContextMutating> {
    AFMyriadContext *_baseModel;
    unsigned long long _timestamp;
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTimestamp : 1; unsigned char hasPerceptualAudioHash : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPerceptualAudioHash:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setTimestamp:(unsigned long long)a0;
- (id)initWithBaseModel:(id)a0;

@end
