@class NSString, NSMutableSet;

@interface SCRCompositeGovernor : NSObject <SCRGovernor> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_governors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeGovernor:(id)a0;
- (BOOL)taskAdministrator:(id)a0 isEligibleToPerformTask:(id)a1 eligiblityError:(id *)a2;
- (void)addGovernor:(id)a0;
- (void)taskAdministrator:(id)a0 didCompleteTask:(id)a1 withError:(id)a2;
- (void)taskAdministrator:(id)a0 willPerformTask:(id)a1;

@end
