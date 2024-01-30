@class NSString;

@interface HDCloudSyncShareParticipantManagerTaskServer : HDStandardTaskServer <HKCloudSyncShareParticipantManagerServerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_fetchSharingParticipantStatus:(id /* block */)a0;
- (void)remote_fetchAllShareParticipantEmailAddressesWithCompletion:(id /* block */)a0;
- (void)remote_tearDownHealthSharingForProfile:(id)a0 completion:(id /* block */)a1;
- (void)remote_revokeAccessForAllShareParticipantsWithCompletion:(id /* block */)a0;

@end
