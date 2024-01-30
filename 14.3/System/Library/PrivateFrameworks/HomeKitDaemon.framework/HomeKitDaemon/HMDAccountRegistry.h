@class NSArray, NSString, HMDRemoteAccountManager, HMDAppleAccountManager, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDAccountRegistry : HMFObject <HMFLogging, NSFastEnumeration> {
    id<HMFLocking> _lock;
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

+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)accountForHandle:(id)a0;
- (void)stop;
- (id)attributeDescriptions;
- (void)start;
- (id)deviceForHandle:(id)a0;
- (void)_resolveAccountForHandle:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAppleAccountManager:(id)a0 remoteAccountManager:(id)a1;
- (void)__handleAppleAccountUpdate:(id)a0;
- (void)__handleAddedRemoteAccount:(id)a0;
- (void)__handleRemovedRemoteAccount:(id)a0;
- (id)accountForHandle:(id)a0 exists:(BOOL *)a1;
- (id)deviceForIdentifier:(id)a0;
- (id)deviceForHandle:(id)a0 exists:(BOOL *)a1;
- (id)deviceForDevice:(id)a0 exists:(BOOL *)a1;
- (BOOL)accountExistsForHandle:(id)a0;
- (BOOL)deviceExistsForHandle:(id)a0;
- (BOOL)deviceExistsForDevice:(id)a0;
- (id)deviceForDevice:(id)a0;
- (id)deviceForPushToken:(id)a0;
- (void)__handleAppleAccountHandlesUpdated:(id)a0;
- (void)__handleAppleAccountDeviceAdded:(id)a0;

@end
