@class AFRemoteRequestWatcher, INUIAppIntentDeliverer, AFRequestInfo, CMPocketStateManager;

@interface SASRemoteRequestManager : NSObject

@property (retain, nonatomic) AFRemoteRequestWatcher *remoteRequestWatcher;
@property (retain, nonatomic) INUIAppIntentDeliverer *currentAppIntentDeliverer;
@property (nonatomic) unsigned long long currentVoiceTriggerRestriction;
@property (nonatomic) unsigned long long pendingVoiceTriggerRestrictionCount;
@property (nonatomic) BOOL hasPendingVoiceTriggerActivation;
@property (retain, nonatomic) AFRequestInfo *pendingVoiceTriggerActivationInfo;
@property (retain, nonatomic) CMPocketStateManager *pocketStateManager;
@property (nonatomic) long long currentPocketState;

+ (id)new;
+ (id)manager;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_handleRemotePrewarmWithInfo:(id)a0;
- (void)_handleNewRemoteRequestWithInfo:(id)a0;
- (void)_handleRemoteRequestDismissalWithReason:(long long)a0 options:(unsigned long long)a1 analyticsContext:(id)a2;
- (BOOL)_requestWatcherVoiceActivationEnabled;
- (void)_startFetchingPocketStateUpdates;
- (void)_processPendingVoiceTriggerActivationsWithInfo:(id)a0 delay:(double)a1;
- (void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)a0;
- (void)_handlePendingVoiceTriggerActivationsWithInfo:(id)a0;

@end
