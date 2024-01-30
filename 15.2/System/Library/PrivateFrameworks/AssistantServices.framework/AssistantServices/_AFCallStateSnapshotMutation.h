@class NSString, AFCallStateSnapshot;

@interface _AFCallStateSnapshotMutation : NSObject <AFCallStateSnapshotMutating> {
    AFCallStateSnapshot *_baseModel;
    unsigned long long _callState;
    BOOL _onSpeaker;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasCallState : 1; unsigned char hasOnSpeaker : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setOnSpeaker:(BOOL)a0;
- (void)setCallState:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
