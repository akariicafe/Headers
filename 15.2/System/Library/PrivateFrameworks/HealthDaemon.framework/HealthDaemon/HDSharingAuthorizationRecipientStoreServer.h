@class NSString, HKSharingAuthorizationRecipientStoreTaskConfiguration;

@interface HDSharingAuthorizationRecipientStoreServer : HDStandardTaskServer <HKSharingAuthorizationRecipientStoreServerInterface, HDSharingAuthorizationManagerObserver> {
    HKSharingAuthorizationRecipientStoreTaskConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)taskIdentifier;
+ (Class)configurationClass;

- (void)connectionInvalidated;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)remote_fetchRecipientIdentifiersWithCompletion:(id /* block */)a0;
- (void)remote_unregisterObservers;
- (void)remote_registerObservers;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)sharingAuthorizationManager:(id)a0 didAddSharingAuthorizations:(id)a1 recipientIdentifier:(id)a2;
- (void)sharingAuthorizationManager:(id)a0 didRemoveSharingAuthorizations:(id)a1 recipientIdentifier:(id)a2;
- (void)sharingAuthorizationManager:(id)a0 didRevokeRecipientWithIdentifier:(id)a1;

@end
