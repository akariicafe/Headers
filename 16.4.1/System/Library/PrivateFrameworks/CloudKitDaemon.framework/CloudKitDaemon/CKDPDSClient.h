@class PDSRegistrar, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPDSClient : NSObject

@property (readonly, nonatomic) NSMutableDictionary *registrationsByDSID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) PDSRegistrar *registrar;

+ (id)sharedClient;

- (void)expungeStaleDSIDs;
- (id)_pdsQualifierFromContainerID:(id)a0;
- (void)unregisterAllTokens;
- (BOOL)unregisterTokenForContainer:(id)a0 outError:(id *)a1;
- (id)_registrationForContainer:(id)a0;
- (id)_init;
- (id)inlock_registrationsForDSID:(id)a0;
- (id)_registrationForAppContainerAccountTuple:(id)a0 pushBundleIdentifier:(id)a1 pdsPushEnvironment:(char)a2;
- (id)_pdsTopicFromBundleIdentifier:(id)a0 withContainerID:(id)a1;
- (BOOL)_unregisterRegistration:(id)a0 forDSID:(id)a1 outError:(id *)a2;
- (id)inlock_registrar;
- (char)_pdsPushEnvironmentFromAPSEnvironmentString:(id)a0;
- (BOOL)unregisterAllTokensForAccountID:(id)a0 outError:(id *)a1;
- (void).cxx_destruct;
- (BOOL)ensureRegistrationForContainer:(id)a0 outError:(id *)a1;

@end
