@class NSString, NSSet, HDSynchronousTaskGroup;

@interface HDCloudSyncRemoveSharingParticipantsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSSet *_participantsToRemove;
    HDSynchronousTaskGroup *_taskGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (id)_updatedSharesByRemovingParticipants:(id)a0 container:(id)a1;
- (void)_saveUpdatedShares:(id)a0 container:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 participantsToRemove:(id)a2;

@end
