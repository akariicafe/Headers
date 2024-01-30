@class NSString, BiometricKitXPCClient, BKDeviceDescriptor, NSObject;
@protocol BKDeviceDelegate, OS_dispatch_queue;

@interface BKDevice : NSObject <BiometricKitDelegateXpcProtocol> {
    BiometricKitXPCClient *_xpcClient;
}

@property (retain, nonatomic) BKDeviceDescriptor *descriptor;
@property (weak, nonatomic) id<BKDeviceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)lockoutState:(long long *)a0 fromDeviceLockoutState:(long long)a1 error:(id *)a2;
+ (BOOL)biometryAvailabilityInfo:(long long *)a0 fromDeviceInfo:(long long)a1 error:(id *)a2;
+ (id)deviceWithDescriptor:(id)a0 error:(id *)a1;
+ (BOOL)deviceAvailableWithError:(id *)a0;
+ (BOOL)extendedLockoutState:(long long *)a0 fromDeviceLockoutState:(long long)a1 error:(id *)a2;

- (id)createEnrollOperationWithError:(id *)a0;
- (void)removeIdentity:(id)a0 async:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)bioLockoutState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (void)updateIdentity:(id)a0 async:(BOOL)a1 reply:(id /* block */)a2;
- (id)effectiveProtectedConfigurationForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)forceBioLockoutForUser:(unsigned int)a0 error:(id *)a1;
- (void)templateUpdate:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)taskResumeStatus:(int)a0 client:(unsigned long long)a1;
- (id)identitiesForUser:(unsigned int)a0 error:(id *)a1;
- (void)removeAllIdentitiesForUser:(unsigned int)a0 async:(BOOL)a1 reply:(id /* block */)a2;
- (void)removeIdentity:(id)a0 reply:(id /* block */)a1;
- (BOOL)forceBioLockoutForAllUsersWithError:(id *)a0;
- (void)setSystemProtectedConfiguration:(id)a0 credentialSet:(id)a1 async:(BOOL)a2 reply:(id /* block */)a3;
- (id)freeIdentityCountForUser:(unsigned int)a0 error:(id *)a1;
- (void)enrollFeedback:(id)a0 client:(unsigned long long)a1;
- (id)identitiesWithError:(id *)a0;
- (BOOL)biometryAvailability:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (BOOL)extendedBioLockoutState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (void)setProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 credentialSet:(id)a2 reply:(id /* block */)a3;
- (id)lastMatchEventWithError:(id *)a0;
- (void)removeAllIdentitiesForUser:(unsigned int)a0 reply:(id /* block */)a1;
- (BOOL)dropAllUnlockTokensWithError:(id *)a0;
- (BOOL)deviceHardwareState:(unsigned long long *)a0 error:(id *)a1;
- (void)setSystemProtectedConfiguration:(id)a0 credentialSet:(id)a1 reply:(id /* block */)a2;
- (BOOL)removeAllIdentitiesForUser:(unsigned int)a0 error:(id *)a1;
- (id)identitiesDatabaseUUIDForUser:(unsigned int)a0 error:(id *)a1;
- (void)homeButtonPressed:(unsigned long long)a0;
- (BOOL)removeIdentity:(id)a0 error:(id *)a1;
- (id)identityForUUID:(id)a0 error:(id *)a1;
- (void)statusMessage:(unsigned int)a0 details:(id)a1 client:(unsigned long long)a2;
- (BOOL)setSystemProtectedConfiguration:(id)a0 credentialSet:(id)a1 error:(id *)a2;
- (BOOL)setProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 credentialSet:(id)a2 error:(id *)a3;
- (id)identitiesDatabaseHashForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)expressModeState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (void)touchIDButtonPressed:(BOOL)a0 client:(unsigned long long)a1;
- (id)maxIdentityCountWithError:(id *)a0;
- (id)createMatchOperationWithError:(id *)a0;
- (BOOL)forceBioLockoutIfLockedForUser:(unsigned int)a0 error:(id *)a1;
- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)enrollResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (id)protectedConfigurationForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)updateIdentity:(id)a0 error:(id *)a1;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (id)createPresenceDetectOperationWithError:(id *)a0;
- (void)setProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 credentialSet:(id)a2 async:(BOOL)a3 reply:(id /* block */)a4;
- (id)systemProtectedConfigurationWithError:(id *)a0;
- (void)updateIdentity:(id)a0 reply:(id /* block */)a1;
- (void)enrollUpdate:(id)a0 client:(unsigned long long)a1;
- (BOOL)isDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dispatchQueue;

@end
