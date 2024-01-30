@class EvaluationRequest, NSMutableDictionary, NSDictionary, MechanismContext, NSMutableArray, NSError;
@protocol LAContextExternalizationProt, LAUIDelegate;

@interface MechanismBase : NSObject <LAUIDelegate> {
    id /* block */ _replyToRun;
    MechanismContext *_mechanismContext;
    NSDictionary *_eventProcessing;
    NSMutableDictionary *_hints;
    unsigned int _instanceId;
}

@property (class, readonly) unsigned int newInstanceId;

@property (readonly, nonatomic) NSMutableArray *assertions;
@property (retain, nonatomic) NSMutableDictionary *partialResult;
@property (readonly, nonatomic) long long eventIdentifier;
@property (readonly, nonatomic) long long remoteViewController;
@property (readonly, nonatomic) EvaluationRequest *request;
@property (readonly, weak, nonatomic) id<LAContextExternalizationProt> cachedExternalizationDelegate;
@property (readonly, nonatomic) NSDictionary *internalOptions;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSDictionary *policyOptions;
@property (retain, nonatomic) NSDictionary *activationParams;
@property (weak, nonatomic) id<LAUIDelegate> eventsDelegate;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic, getter=isRestartable) BOOL restartable;
@property (readonly, nonatomic, getter=isLastRestartAttempt) BOOL lastRestartAttempt;
@property (weak, nonatomic) MechanismBase *parent;
@property (retain, nonatomic) MechanismBase *preCompanion;
@property (retain, nonatomic) MechanismBase *postCompanion;
@property (readonly, nonatomic) BOOL precedesUI;
@property (copy, nonatomic) id /* block */ showUIBlock;
@property (retain, nonatomic) NSError *silentFailure;

- (id)tccService;
- (id)description;
- (id)externalizedContext;
- (void).cxx_destruct;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)cancelAuthentication;
- (void)willFinish;
- (void)prepareForRestart;
- (id)remoteAlertViewControllerName;
- (void)failAuthenticationWithError:(id)a0;
- (id)descriptionFlags;
- (id)tccError:(BOOL)a0;
- (void)noResponseEventWithParams:(id)a0;
- (void)finishRunWithResult:(id)a0 error:(id)a1 skipReply:(BOOL)a2;
- (void)cancelByParent:(id)a0;
- (void)finishRunWithResult:(id)a0 error:(id)a1;
- (void)succeedAuthenticationWithResult:(id)a0;
- (void)yieldPartialResult:(long long)a0 value:(id)a1;
- (BOOL)isAvailableForPurpose:(long long)a0 error:(id *)a1;
- (BOOL)_isProcessedBy:(id)a0;
- (id)availabilityEventsForPurpose:(long long)a0;
- (BOOL)requiresRemoteViewControllerUiWithEventProcessing:(id)a0;
- (void)subMechanismCanRestart:(id)a0;
- (void)fallbackToIdentifier:(long long)a0;
- (id)initWithParams:(id)a0 request:(id)a1;
- (id)initWithEventIdentifier:(long long)a0 remoteViewController:(long long)a1 cachedExternalizationDelegate:(id)a2 request:(id)a3;
- (BOOL)isTCCAllowedWithAuditTokenData:(id)a0 optionAuditTokenData:(id)a1 forcePrompt:(BOOL)a2 error:(id *)a3;
- (void)runWithHints:(id)a0 eventsDelegate:(id)a1 reply:(id /* block */)a2;
- (void)succeedAuthenticationWithDefaultResult;
- (void)yieldPartialResult:(id)a0;
- (BOOL)pause:(BOOL)a0 forEvent:(long long)a1 error:(id *)a2;
- (id)bestEffortAvailableMechanismForRequest:(id)a0 error:(id *)a1;
- (id)findMechanismWithEventIdentifier:(long long)a0;
- (id)findMechanismToRetryWithEventIdentifier:(long long)a0;
- (id)backgroundMechanismForEventProcessing:(id)a0;
- (long long)remoteViewControllerForEventProcessing:(id)a0;
- (BOOL)requiresUiWithEventProcessing:(id)a0;
- (void)setCredential:(id)a0 credentialType:(long long)a1 reply:(id /* block */)a2;
- (id)additionalControllerInternalInfoForPolicy:(long long)a0;
- (void)restartWithEventIdentifier:(long long)a0 lastAttempt:(BOOL)a1;
- (void)companionStateChanged:(id)a0 newState:(BOOL)a1;
- (void)setShowingCoachingHint:(BOOL)a0 reply:(id /* block */)a1;
- (void)holdAssertionUntilFinished:(id)a0;

@end
