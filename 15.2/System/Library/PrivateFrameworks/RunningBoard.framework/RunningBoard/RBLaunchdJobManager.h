@class RBPersonaManager, NSMutableDictionary, NSMutableOrderedSet;
@protocol RBLaunchdInterfacing;

@interface RBLaunchdJobManager : NSObject {
    NSMutableDictionary *_lock_jobsByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<RBLaunchdInterfacing> _launchdInterface;
    RBPersonaManager *_personaManager;
    NSMutableOrderedSet *_lock_reslideIdentities;
}

+ (id)lastExitStatusForLabel:(id)a0 error:(out id *)a1;

- (id)createAndLaunchWithIdentity:(id)a0 context:(id)a1 error:(out id *)a2;
- (unsigned int)_personaForIdentity:(id)a0 context:(id)a1;
- (BOOL)removeJobWithInstance:(id)a0 error:(out id *)a1;
- (id)initWithLaunchdInterface:(id)a0 personaManager:(id)a1;
- (id)synchronizeJobs;
- (void)_addReslideIdentityIfNeeded:(id)a0 exitStatus:(id)a1;
- (void).cxx_destruct;
- (void)invokeOnProcessDeath:(id)a0 handler:(id /* block */)a1 onQueue:(id)a2;
- (id)_generateDataWithIdentity:(id)a0 context:(id)a1;
- (BOOL)_removeJobWithInstance:(id)a0 orJob:(id)a1 error:(out id *)a2;
- (id)_createLaunchdJobWithIdentity:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)_isRunningBoardLaunched:(id)a0;
- (id)_createAndSubmitExtensionJob:(id)a0 UUID:(id)a1 error:(id *)a2;

@end
