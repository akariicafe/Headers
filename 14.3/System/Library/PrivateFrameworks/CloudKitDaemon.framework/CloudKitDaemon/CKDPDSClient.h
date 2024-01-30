@class PDSRegistrar, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPDSClient : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrationsByDSID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) PDSRegistrar *registrar;

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)unregisterTokenForAppContainerAccountTuple:(id)a0 contextInfoProvider:(id)a1 outError:(id *)a2;
- (BOOL)unregisterAllTokensForAppContainerAccountTuple:(id)a0 pushBundleIdentifier:(id)a1 outError:(id *)a2;
- (BOOL)unregisterAllTokensForAccountID:(id)a0 outError:(id *)a1;
- (BOOL)ensureRegistrationForAppContainerAccountTuple:(id)a0 contextInfoProvider:(id)a1 outError:(id *)a2;
- (id)inlock_registrar;
- (id)_pdsTopicFromBundleIdentifier:(id)a0 withContainerID:(id)a1;
- (id)_pdsQualifierFromContainerID:(id)a0;
- (char)_pdsPushEnvironmentFromAPSEnvironmentString:(id)a0;
- (id)_registrationForAppContainerAccountTuple:(id)a0 contextInfoProvider:(id)a1;
- (id)inlock_registrationsForDSID:(id)a0;
- (BOOL)_unregisterRegistration:(id)a0 forDSID:(id)a1 outError:(id *)a2;
- (id)_registrationForAppContainerAccountTuple:(id)a0 pushBundleIdentifier:(id)a1 pdsPushEnvironment:(char)a2;
- (void)unregisterAllTokens;

@end
