@class NSString, AFAccessibilityState;

@interface _AFAccessibilityStateMutation : NSObject <AFAccessibilityStateMutating> {
    AFAccessibilityState *_baseModel;
    long long _isVoiceOverTouchEnabled;
    long long _isVibrationDisabled;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsVoiceOverTouchEnabled : 1; unsigned char hasIsVibrationDisabled : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setIsVoiceOverTouchEnabled:(long long)a0;
- (void)setIsVibrationDisabled:(long long)a0;
- (id)generate;
- (id)initWithBaseModel:(id)a0;

@end
