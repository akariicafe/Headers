@class NSUUID, NSString, NSArray, NSHashTable, NFSecureElement, NSMutableArray, NSObject, NSNumber;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PKSecureElement : NSObject <NFHardwareEventListener, NFRemoteAdminEventListener> {
    BOOL _deletingAllApplets;
    NSObject<OS_dispatch_source> *_deletingAllAppletsTimer;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsTimerQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deletingAllAppletsPropertyLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    id /* block */ _secureElementSessionPrelude;
    id /* block */ _secureElementSessionPostlude;
    unsigned char _sessionCounter;
    BOOL _startingSession;
    BOOL _startingPrioritySession;
    BOOL _startingAsyncSession;
    NSMutableArray *_sessionAccessHandlers;
    NSMutableArray *_prioritySessionAccessHandlers;
    NSMutableArray *_asyncSessionAccessHandlers;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    BOOL _registeredForHardwareUpdates;
    NFSecureElement *_secureElement;
    NSArray *_secureElementArray;
    id /* block */ _pairingChangeHandler;
}

@property (copy, nonatomic) id /* block */ secureElementSessionPrelude;
@property (copy, nonatomic) id /* block */ secureElementSessionPostlude;
@property (readonly, nonatomic) BOOL isOwnable;
@property (readonly, nonatomic) BOOL isProductionSigned;
@property (readonly, nonatomic) BOOL isInRestrictedMode;
@property (readonly, nonatomic) BOOL isDeletingAllApplets;
@property (readonly, nonatomic) unsigned long long supportedTechnologies;
@property (readonly, nonatomic) unsigned long long hardwareVersion;
@property (readonly, nonatomic) NSString *primaryRegionTopic;
@property (readonly, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property (readonly, nonatomic) NSString *primarySecureElementIdentifier;
@property (readonly, nonatomic) NSArray *secureElementIdentifiers;
@property (readonly, nonatomic) NSUUID *ownerUserUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInFailForward;
+ (BOOL)supportsExpressMode:(id)a0 byHardware:(BOOL *)a1;
+ (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)a0;
+ (BOOL)hardwareSupportsExpressMode:(id)a0;
+ (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)a0 byHardware:(BOOL *)a1 outError:(id *)a2;
+ (BOOL)supportsExpressMode:(id)a0;
+ (id)sharedSecureElement;
+ (void)accessSecureElementManagerSessionWithSessionExchangeToken:(id)a0 callbackQueue:(id)a1 handler:(id /* block */)a2;
+ (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)a0 byHardware:(BOOL *)a1;
+ (id)secureElementIdentifiers;
+ (void)accessSecureElementManagerSessionWithSessionExchangeToken:(id)a0 handler:(id /* block */)a1;
+ (BOOL)hardwareSupportsExpressForAutomaticSelectionTechnologyType:(long long)a0 outError:(id *)a1;
+ (BOOL)hardwareSupportsExpressForAutomaticSelectionTechnologyType:(long long)a0;
+ (id)primarySecureElementIdentifier;

- (void)areAnyAppletsSuspendedWithCompletionHandler:(id /* block */)a0;
- (void)generateTransactionKeyWithReaderIdentifier:(id)a0 readerPublicKey:(id)a1 withCompletion:(id /* block */)a2;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)_executeSecureElementSessionHandlersWithPriority:(BOOL)a0 session:(id)a1;
- (void)pairingStateWithCompletion:(id /* block */)a0;
- (BOOL)supportsExpressModeForExpressPassType:(long long)a0;
- (void)allAppletsWithCompletion:(id /* block */)a0;
- (void)consistencyCheckDeviceCredentialsWithCompletion:(id /* block */)a0;
- (void)peerPaymentEnrollmentDataWithAlternateDSID:(id)a0 completion:(id /* block */)a1;
- (void)registerObserver:(id)a0;
- (void)signedPlatformDataWithCompletion:(id /* block */)a0;
- (void)signatureForAuthToken:(id)a0 completion:(id /* block */)a1;
- (void)_executeSecureElementAsyncSessionHandlersWithSession:(id)a0 completion:(id /* block */)a1;
- (void)signChallenge:(id)a0 signatureEntanglementMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)queueConnectionToServerForAppletIdentifiers:(id)a0;
- (void)markAppletsWithIdentifiersForDeletion:(id)a0 completion:(id /* block */)a1;
- (void)accessAsyncSecureElementManagerSessionWithHandler:(id /* block */)a0;
- (void)signChallenge:(id)a0 forPaymentApplication:(id)a1 withCompletion:(id /* block */)a2;
- (void)remoteAdminCleanupProgress:(double)a0;
- (BOOL)setOwnerUserUUID:(id)a0 keybagUUID:(id)a1;
- (BOOL)hasRegistrationInformation;
- (void)accessSecureElementManagerSessionWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_registerPairingChangeHandler;
- (id)init;
- (void)stateInformationWithCompletion:(id /* block */)a0;
- (void)allAppletsAndCredentialsWithCompletion:(id /* block */)a0;
- (id)_allAppletsWithSession:(id)a0;
- (void)contactlessPaymentPassesAvailableDidChange;
- (void)SEPPairingInfoWithCompletion:(id /* block */)a0;
- (unsigned long long)ownershipStateForUserUUID:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)connectToServerWithPushTopic:(id)a0 completion:(id /* block */)a1;
- (void)markAllAppletsForDeletionWithExternalAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)createFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 challenge:(id)a2 externalizedAuth:(id)a3 completion:(id /* block */)a4;
- (void)accessPrioritySecureElementManagerSessionWithHandler:(id /* block */)a0;
- (void)checkFidoKeyPresenceForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (void)_startSecureElementManagerSessionWithType:(long long)a0 handler:(id)a1;
- (void)markAppletWithIdentifierForDeletion:(id)a0 completion:(id /* block */)a1;
- (BOOL)queueConnectionToServerWithPushTopic:(id)a0;
- (void)appletWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)secureElement:(id)a0 didChangeRestrictedMode:(BOOL)a1;
- (void)signWithFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2 challenge:(id)a3 publicKeyIdentifier:(id)a4 externalizedAuth:(id)a5 completion:(id /* block */)a6;
- (void)generateTransactionKeyWithParameters:(id)a0 withCompletion:(id /* block */)a1;
- (void)_updateHardwareManagerListener;
- (BOOL)setRegistrationInformation:(id)a0 primaryRegionTopic:(id)a1;
- (void)initializeSecureElementQueuingServerConnection:(BOOL)a0 withCompletion:(id /* block */)a1;

@end
