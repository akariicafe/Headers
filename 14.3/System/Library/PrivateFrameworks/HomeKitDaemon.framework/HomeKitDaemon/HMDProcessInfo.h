@class NSData, HMFLocationAuthorization, NSArray, NSString, HMDApplicationInfo, RBSProcessState, RBSProcessHandle, NSHashTable;
@protocol HMFLocking;

@interface HMDProcessInfo : HMFProcessInfo <HMFLogging> {
    id<HMFLocking> _lock;
    NSHashTable *_connections;
}

@property (class, readonly) NSData *privateClientIdentifierSalt;

@property unsigned long long state;
@property (readonly, copy, nonatomic) RBSProcessState *processState;
@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly, copy) NSArray *connections;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, getter=isActive) BOOL active;
@property (readonly, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly, getter=isForegrounded) BOOL foreground;
@property (readonly, getter=isBackgroundUpgradedToForeground) BOOL backgroundUpgradedToForeground;
@property (readonly, getter=isBackgrounded) BOOL background;
@property (readonly, getter=isSuspended) BOOL suspended;
@property (readonly, getter=isTerminated) BOOL terminated;
@property (readonly) BOOL shouldMonitor;
@property (readonly) HMDApplicationInfo *applicationInfo;
@property (readonly) HMFLocationAuthorization *locationAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)processInfoWithConnection:(id)a0;

- (void)removeConnection:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)addConnection:(id)a0;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)clientIdentifierSalt:(id *)a0;
- (void)_updateProcessState:(id)a0;

@end
