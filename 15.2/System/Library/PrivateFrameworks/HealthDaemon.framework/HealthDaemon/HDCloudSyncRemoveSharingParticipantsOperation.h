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

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 participantsToRemove:(id)a2;

@end
