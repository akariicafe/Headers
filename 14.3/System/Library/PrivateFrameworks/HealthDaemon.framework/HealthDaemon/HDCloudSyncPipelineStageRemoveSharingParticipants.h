@class NSSet;

@interface HDCloudSyncPipelineStageRemoveSharingParticipants : HDCloudSyncPipelineStage

@property (nonatomic) BOOL removeAllParticipants;
@property (copy, nonatomic) NSSet *participantsToRemove;

- (void).cxx_destruct;
- (void)main;
- (id)_delegateToOperationForRemoveSharingParticipants:(id)a0;

@end
