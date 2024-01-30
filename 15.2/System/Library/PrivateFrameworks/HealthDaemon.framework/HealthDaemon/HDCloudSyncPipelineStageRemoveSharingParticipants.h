@class NSSet;

@interface HDCloudSyncPipelineStageRemoveSharingParticipants : HDCloudSyncPipelineStage

@property (nonatomic) BOOL removeAllParticipants;
@property (copy, nonatomic) NSSet *participantsToRemove;

- (void)main;
- (void).cxx_destruct;

@end
