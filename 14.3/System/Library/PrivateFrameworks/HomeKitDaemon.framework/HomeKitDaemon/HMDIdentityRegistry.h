@class NSRecursiveLock, NSArray, NSString, NSMutableArray;

@interface HMDIdentityRegistry : HMFObject <HMFLogging, HMFDumpState> {
    NSMutableArray *_registeredIdentities;
}

@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (readonly) NSArray *registeredIdentities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedRegistry;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)attributeDescriptions;
- (id)dumpState;
- (id)identityForIdentifier:(id)a0;
- (void)registerIdentity:(id)a0 device:(id)a1 object:(id)a2;
- (void)registerIdentity:(id)a0 account:(id)a1 object:(id)a2;
- (id)identitiesForDevice:(id)a0;
- (id)identitiesForAccount:(id)a0;
- (id)accountsForIdentity:(id)a0;
- (void)deregisterIdentity:(id)a0 object:(id)a1;

@end
