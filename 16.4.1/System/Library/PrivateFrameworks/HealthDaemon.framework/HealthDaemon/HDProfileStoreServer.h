@class NSString;

@interface HDProfileStoreServer : HDStandardTaskServer <HKProfileStoreServer, HDProfileManagerObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)profileListDidChange;
- (id)exportedInterface;
- (void)dealloc;
- (void)remote_createProfileOfType:(long long)a0 displayName:(id)a1 completion:(id /* block */)a2;
- (void)remote_deleteProfile:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchDisplayImageData:(id /* block */)a0;
- (void)remote_fetchDisplayNameWithCompletion:(id /* block */)a0;
- (void)remote_fetchSharingInformationForProfileIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_getAllProfilesWithCompletion:(id /* block */)a0;
- (void)remote_profileIdentifierForNRDeviceUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_profileIdentifierForNRDeviceUUID:(id)a0 ownerAppleID:(id)a1 completion:(id /* block */)a2;
- (void)remote_setDisplayFirstName:(id)a0 lastName:(id)a1 completion:(id /* block */)a2;
- (void)remote_setDisplayImageData:(id)a0 completion:(id /* block */)a1;
- (void)remote_startObservingWithCompletion:(id /* block */)a0;

@end
