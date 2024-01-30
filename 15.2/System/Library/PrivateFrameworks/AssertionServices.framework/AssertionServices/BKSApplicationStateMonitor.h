@class NSArray, RBSProcessMonitor;

@interface BKSApplicationStateMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSProcessMonitor *_monitor;
    NSArray *_interestedAssertionReasons;
}

@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) unsigned int interestedStates;
@property (readonly, copy, nonatomic) NSArray *interestedBundleIDs;
@property (readonly, nonatomic) BOOL elevatedPriority;

- (id)initWithBundleIDs:(id)a0 states:(unsigned int)a1;
- (void)applicationInfoForPID:(int)a0 completion:(id /* block */)a1;
- (id)bundleInfoValueForKey:(id)a0 PID:(int)a1;
- (id)_legacyInfoForProcess:(id)a0 state:(id)a1;
- (void)applicationInfoForApplication:(id)a0 completion:(id /* block */)a1;
- (id)_legacyInfoForProcess:(id)a0;
- (unsigned int)applicationStateForApplication:(id)a0;
- (unsigned int)_legacyStateForProcess:(id)a0 state:(id)a1;
- (id)initWithBundleIDs:(id)a0 states:(unsigned int)a1 elevatedPriority:(BOOL)a2;
- (id)initWithEndpoint:(id)a0 bundleIDs:(id)a1 states:(unsigned int)a2 elevatedPriority:(BOOL)a3;
- (BOOL)isApplicationBeingDebugged:(id)a0;
- (id)applicationInfoForPID:(int)a0;
- (BOOL)_clientSubscribedToThisStateChange:(id)a0 state:(id)a1 prevState:(id)a2;
- (void)updateInterestedBundleIDs:(id)a0 states:(unsigned int)a1;
- (void).cxx_destruct;
- (void)lock_updateConfiguration;
- (id)init;
- (unsigned int)mostElevatedApplicationStateForPID:(int)a0;
- (void)updateInterestedBundleIDs:(id)a0;
- (BOOL)_clientSubscribedToThisReasonChange:(id)a0;
- (id)initWithBundleIDs:(id)a0 states:(unsigned int)a1 isUserInteractive:(BOOL)a2;
- (void)updateInterestedStates:(unsigned int)a0;
- (void)updateInterestedAssertionReasons:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (id)applicationInfoForApplication:(id)a0;

@end
