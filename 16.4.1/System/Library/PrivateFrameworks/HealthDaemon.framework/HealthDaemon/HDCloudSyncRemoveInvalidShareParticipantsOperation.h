@class NSArray, NSString, HDSynchronousTaskGroup;

@interface HDCloudSyncRemoveInvalidShareParticipantsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup *_taskGroup;
}

@property (nonatomic) long long requiredPermission;
@property (copy, nonatomic) NSArray *participantsToCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
