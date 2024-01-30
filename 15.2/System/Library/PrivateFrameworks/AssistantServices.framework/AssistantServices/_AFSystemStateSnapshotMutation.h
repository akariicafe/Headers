@class NSString, AFSystemStateSnapshot;

@interface _AFSystemStateSnapshotMutation : NSObject <AFSystemStateSnapshotMutating> {
    AFSystemStateSnapshot *_baseModel;
    long long _sleepState;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSleepState : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setSleepState:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
