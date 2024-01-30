@class NSUUID, BorderAgentFinder, HMFTimer, NSError, HMHome, NSString, BorderAgentConnector, NSObject, HMThreadNetworkCredentials;
@protocol OS_dispatch_queue;

@interface HMThreadExternalCommissioner : NSObject <BorderAgentListener, HMFCancellable, HMFTimerDelegate, HMFLogging, HMThreadExternalCommissioner>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) double finderTimeoutInterval;
@property (retain, nonatomic) HMThreadNetworkCredentials *credentials;
@property (readonly, nonatomic) NSUUID *credentialsUUID;
@property (readonly, nonatomic) HMHome *credentialsHome;
@property (readonly, nonatomic) BorderAgentFinder *borderAgentFinder;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSError *cancelError;
@property (copy, nonatomic) id /* block */ finderCompletion;
@property (retain, nonatomic) HMFTimer *finderTimer;
@property (retain, nonatomic) BorderAgentConnector *borderAgentConnector;
@property (nonatomic, getter=isCommissioning) BOOL commissioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)initCommon;
- (void)cancel;
- (void).cxx_destruct;
- (void)_cancelWithError:(id)a0;
- (void)_commissionAccessoryWithService:(id)a0 eui64:(id)a1 commissionerPassphrase:(id)a2 PSKc:(id)a3 joinerPassphrase:(id)a4 completion:(id /* block */)a5;
- (id)_computeJoinerPassphraseFromSetupCode:(id)a0;
- (id)_ensureSetupCodeFormat:(id)a0;
- (void)_findBorderRouterForCredentials:(id)a0 completion:(id /* block */)a1;
- (void)_resolveCredentialsWithCompletion:(id /* block */)a0;
- (BOOL)_txtRecordDataMatches:(id)a0;
- (void)agentChanged;
- (id)commissionAccessoryWithEui64:(id)a0 setupCode:(id)a1 completion:(id /* block */)a2;
- (id)initWithFinderTimeoutInterval:(double)a0 borderAgentFinder:(id)a1;
- (id)initWithHome:(id)a0;
- (id)initWithNetworkCredentials:(id)a0;

@end
