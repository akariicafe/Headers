@class NSSManager, NPKCompanionAgentConnection, PUConnection, NSDate, PKPaymentWebService;

@interface NPKPaymentPreflighter : NSObject

@property (retain, nonatomic) PUConnection *passcodeConnection;
@property (retain, nonatomic) NSSManager *systemSettingsManager;
@property (nonatomic) BOOL checkedWatchPasscodeAndUnlockedStatus;
@property (nonatomic) BOOL checkedCompanioniCloudStatus;
@property (nonatomic) BOOL checkedWatchiCloudStatus;
@property (nonatomic) BOOL checkedWristDetectionStatus;
@property (nonatomic) BOOL authRandomSetIfNecessary;
@property (nonatomic) BOOL watchConnected;
@property (nonatomic) BOOL spaceAvailableOnSecureElement;
@property (nonatomic) BOOL needsPasscode;
@property (nonatomic) BOOL needsUnlock;
@property (nonatomic) BOOL needsCompanioniCloudAccount;
@property (nonatomic) BOOL needsWatchiCloudAccount;
@property (nonatomic) BOOL needsWristDetection;
@property (copy, nonatomic) id /* block */ preflightCompletionHandler;
@property (retain, nonatomic) PKPaymentWebService *webService;
@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection;
@property (nonatomic, getter=isPreflighting) BOOL preflighting;
@property (retain, nonatomic) NSDate *watchPasscodeAndUnlockedQueryDate;

+ (BOOL)watchConnected;

- (void).cxx_destruct;
- (void)_checkSpaceAvailableOnSecureElement;
- (void)_checkWatchConnected;
- (void)_checkCompanioniCloudAccount;
- (void)_checkWatchiCloudAccount;
- (void)_checkPasscodeEnabledAndUnlockedState;
- (void)_checkWristDetectEnabledState;
- (void)_finishPresentingSetupControllerIfReadyWithSuccess:(BOOL)a0 error:(id)a1;
- (id)_errorForConnectionIssue;
- (void)_checkPasscodeEnabledState;
- (id)_errorForCompanionAccountNeeded;
- (void)_checkPasscodeEnabledAndUnlockedStateRequiringPasscode:(BOOL)a0 requiringUnlock:(BOOL)a1;
- (void)_setAuthRandomIfNecessary;
- (id)_errorForGenericIssue;
- (id)_errorForWristDetectNeeded;
- (id)_errorForGizmoAccountNeeded;
- (id)_errorForPasscodeNeeded;
- (id)_errorForUnlockNeeded;
- (id)initWithWebService:(id)a0 companionAgentConnection:(id)a1;
- (void)addCardPreflightWithCompletion:(id /* block */)a0;
- (void)transferToCompanionPreflightWithCompletion:(id /* block */)a0;
- (void)acceptInvitationPreflightWithCompletion:(id /* block */)a0;

@end
