@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MCMDMClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)sharedClient;

- (BOOL)isActivationLockAllowedWhileSupervised;
- (void)simulatePush;
- (void)_queue_createAndStartMDMXPCConnection;
- (id)init;
- (void).cxx_destruct;
- (BOOL)authenticateWithCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 useDevelopmentAPNS:(BOOL)a5 signMessage:(BOOL)a6 isUserEnrollment:(BOOL)a7 enrollmentID:(id)a8 outError:(id *)a9;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)scheduleTokenUpdateIfNecessary;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)a0;
- (int)accessRights;
- (void)scheduleTokenUpdate;
- (BOOL)isManagedByMDM;
- (void)migrateMDMWithContext:(int)a0 completion:(id /* block */)a1;
- (BOOL)checkOutCheckInURL:(id)a0 identity:(struct __SecIdentity { } *)a1 pinnedSecCertificateRefs:(id)a2 pinningRevocationCheckRequired:(BOOL)a3 topic:(id)a4 signMessage:(BOOL)a5 isUserEnrollment:(BOOL)a6 enrollmentID:(id)a7 outError:(id *)a8;
- (void)uprootMDM;
- (id)deviceEnrollmentAuthenticationDict;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)a0;
- (id)userEnrollmentAuthenticationDictWithEnrollmentID:(id)a0;
- (void)processDeviceRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)notifyNewConfiguration;
- (void)retryNotNowResponse;

@end
