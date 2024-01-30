@class NSXPCConnection;

@interface CARAutomaticDNDStatus : NSObject

@property (class, readonly, nonatomic, getter=isAutomaticDNDAvailable) BOOL automaticDNDAvailable;

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) unsigned long long cachedAutomaticDNDActiveState;
@property (copy, nonatomic) id /* block */ statusChangeObserver;
@property (copy, nonatomic) id /* block */ exitConfirmationChangeObserver;

+ (id)_DNDServiceInterface;

- (void)autoReplyMessageWithReply:(id /* block */)a0;
- (void)setAutomaticDNDTriggeringMethod:(unsigned long long)a0;
- (double)mostRecentTriggerMethodChange;
- (void)setMostRecentTriggerMethodChange:(double)a0;
- (id)init;
- (void)disableDNDUntilEndOfDriveWithReply:(id /* block */)a0;
- (void)allowedAutoReplyAudience:(id /* block */)a0;
- (void)setAutomaticDNDInternalForceOverrideEnabledPreference:(BOOL)a0;
- (void)setAutomaticDNDActive:(BOOL)a0 withReply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchAutomaticDNDExitConfirmationWithReply:(id /* block */)a0;
- (void)setDisableTimerTimestamp:(id)a0;
- (void)_notifyExitConfirmationActive:(BOOL)a0;
- (void)setActivateWithCarPlay:(BOOL)a0;
- (void)dealloc;
- (void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(BOOL)a0;
- (void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(BOOL)a0;
- (BOOL)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
- (BOOL)hasStartedFirstRidePreference;
- (BOOL)platformSupportsUrgentMessages;
- (void)_resetUserDNDSettingsWithReply:(id /* block */)a0;
- (BOOL)platformSupportsSendingAutoReplies;
- (BOOL)isAutomaticDNDInternalDNDBuddyPreference;
- (id)firstBuddyPresentationFirstMoment;
- (BOOL)shouldActivateWithCarPlay;
- (void)setFirstBuddyPresentationFirstMoment:(id)a0;
- (BOOL)shouldEnforceInternalWhitelist;
- (void)_fetchStatusForObserver;
- (BOOL)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
- (void)setStartedFirstRidePreference:(BOOL)a0;
- (void)setAutomaticDNDTriggerPreference:(unsigned long long)a0 withReply:(id /* block */)a1;
- (BOOL)hasCompletedFirstRidePreference;
- (void)setAllowedAutoReplyAudience:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)outputOfDiagnosticUtilityWithReply:(id /* block */)a0;
- (void)setHasAdjustedTriggerMethod:(BOOL)a0;
- (void)_xpcFetchWithServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)setOptedOutOfAutomaticDND:(BOOL)a0;
- (void)fetchAutomaticDNDAssertionWithReply:(id /* block */)a0;
- (void)setAutoReplyMessage:(id)a0 reply:(id /* block */)a1;
- (void)fetchAutomaticDNDTriggerPreferenceWithReply:(id /* block */)a0;
- (BOOL)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
- (void)_detachObservers;
- (void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(BOOL)a0;
- (void)setAutomaticDNDInternalDNDBuddyEnabledPreference:(BOOL)a0;
- (unsigned long long)automaticDNDTriggeringMethod;
- (void)_performCARPreferencesBlock:(id /* block */)a0 forReading:(BOOL)a1;
- (BOOL)isAutomaticDNDInternalForceOverrideEnabledPreference;
- (void)_completeDNDBuddyWithOption:(unsigned long long)a0 withReply:(id /* block */)a1;
- (BOOL)hasOptedOutOfAutomaticDND;
- (id)disableTimerTimestamp;
- (BOOL)hasAdjustedTriggerMethod;
- (void)disableDNDUntilEndOfDriveWithContext:(id)a0 reply:(id /* block */)a1;
- (void)setCompletedFirstRidePreference:(BOOL)a0;
- (void)_setupConnection;

@end
