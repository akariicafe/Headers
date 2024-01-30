@class RBProcess, NSMutableSet, NSObject;
@protocol RBAssertionManaging, RBDomainAttributeManaging, OS_dispatch_queue, RBAssertionOriginatorPidPersisting;

@interface RBProcessReconnectManager : NSObject {
    id<RBAssertionManaging> _assertionManager;
    id<RBDomainAttributeManaging> _domainAttributeManager;
    id<RBAssertionOriginatorPidPersisting> _assertionOriginatorPidStore;
    RBProcess *_originatorProcess;
    NSMutableSet *_currentAssertionIdentifiers;
    NSMutableSet *_pendingProcesses;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssertionManager:(id)a0 domainAttributeManager:(id)a1 assertionOriginatorPidStore:(id)a2 originatorProcess:(id)a3;
- (void)didInvalidateAssertion:(id)a0;
- (void)reconnectProcesses:(id)a0;

@end
