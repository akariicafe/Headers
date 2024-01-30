@class SCRCompositeGovernor, SCRTaskAdministrator;

@interface SCRApprovalCoordinator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    SCRTaskAdministrator *_administrator;
    SCRCompositeGovernor *_compositeGovernor;
}

- (void)didCompleteTask:(id)a0 withError:(id)a1;
- (void).cxx_destruct;
- (void)removeGovernor:(id)a0;
- (void)addGovernor:(id)a0;
- (BOOL)getApprovalForTask:(id)a0 error:(id *)a1;
- (id)initWithAdministrator:(id)a0;

@end
