@class NSArray, NSString, HMDRemoteAccountManager, HMDAppleAccountManager, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccountRegistry : HMFObject <HMFLogging, NSFastEnumeration> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) HMDAccountRegistry *sharedRegistry;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly) HMDRemoteAccountManager *remoteAccountManager;
@property (readonly) BOOL started;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)logCategory;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)accountForHandle:(id)a0;
- (id)deviceForIdentifier:(id)a0;
- (void)stop;
- (void)start;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)reset;
- (void)__handleAddedRemoteAccount:(id)a0;
- (void)__handleAppleAccountDeviceAdded:(id)a0;
- (void)__handleAppleAccountHandlesUpdated:(id)a0;
- (void)__handleAppleAccountUpdate:(id)a0;
- (void)__handleRemovedRemoteAccount:(id)a0;
- (void)_resolveAccountForHandle:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)accountExistsForHandle:(id)a0;
- (id)accountForHandle:(id)a0 exists:(BOOL *)a1;
- (BOOL)deviceExistsForDevice:(id)a0;
- (id)deviceForAddress:(id)a0;
- (id)deviceForDevice:(id)a0;
- (id)deviceForDevice:(id)a0 exists:(BOOL *)a1;
- (id)deviceForHandle:(id)a0;
- (id)deviceForHandle:(id)a0 exists:(BOOL *)a1;
- (id)deviceForIDSIdentifier:(id)a0;
- (id)deviceForPushToken:(id)a0;
- (id)initWithAppleAccountManager:(id)a0 remoteAccountManager:(id)a1;

@end
