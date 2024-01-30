@class NSString, AFMyriadGoodnessScoreOverrideState;

@interface _AFMyriadGoodnessScoreOverrideStateMutation : NSObject <AFMyriadGoodnessScoreOverrideStateMutating> {
    AFMyriadGoodnessScoreOverrideState *_baseModel;
    long long _overrideOption;
    NSString *_reason;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOverrideOption : 1; unsigned char hasReason : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setOverrideOption:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setReason:(id)a0;

@end
