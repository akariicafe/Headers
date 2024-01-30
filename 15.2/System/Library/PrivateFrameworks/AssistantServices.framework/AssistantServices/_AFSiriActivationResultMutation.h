@class NSString, AFSiriActivationResult, NSError;

@interface _AFSiriActivationResultMutation : NSObject <AFSiriActivationResultMutating> {
    AFSiriActivationResult *_baseModel;
    long long _actionType;
    NSError *_error;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasActionType : 1; unsigned char hasError : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (void)setActionType:(long long)a0;
- (id)generate;
- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
