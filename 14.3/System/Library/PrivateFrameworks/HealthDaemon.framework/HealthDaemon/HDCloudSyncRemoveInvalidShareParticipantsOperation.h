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

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (id)_updateShareRecordsInContainer:(id)a0;
- (BOOL)_isValidParticipant:(id)a0 withPermissions:(long long)a1;

@end
