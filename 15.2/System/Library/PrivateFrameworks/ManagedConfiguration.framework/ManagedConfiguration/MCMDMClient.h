@interface MCMDMClient : NSObject

+ (id)sharedClient;

- (BOOL)authenticateWithCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 useDevelopmentAPNS:(BOOL)a5 signMessage:(BOOL)a6 isUserEnrollment:(BOOL)a7 enrollmentID:(id)a8 outError:(id *)a9;
- (BOOL)checkOutCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 signMessage:(BOOL)a5 isUserEnrollment:(BOOL)a6 enrollmentID:(id)a7 outError:(id *)a8;
- (void)scheduleTokenUpdate;
- (void)simulatePush;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (BOOL)isManagedByMDM;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)a0;
- (void)migrateMDMWithContext:(int)a0 completion:(id /* block */)a1;
- (void)processDeviceRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (int)accessRights;
- (void)uprootMDM;
- (void)notifyNewConfiguration;
- (void)scheduleTokenUpdateIfNecessary;
- (void)retryNotNowResponse;
- (int)_MCMigrationContextToMDMMigrationContext:(int)a0;
- (BOOL)isActivationLockAllowedWhileSupervised;
- (int)_MDMAccessFlagToMCMDMAccessFlag:(int)a0;

@end
