@class NSXPCConnection;

@interface CARAutomaticDNDStatus : NSObject

@property (class, readonly, nonatomic, getter=isAutomaticDNDAvailable) BOOL automaticDNDAvailable;

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) unsigned long long cachedAutomaticDNDActiveState;
@property (copy, nonatomic) id /* block */ statusChangeObserver;
@property (copy, nonatomic) id /* block */ exitConfirmationChangeObserver;

+ (id)_DNDServiceInterface;

- (BOOL)hasCompletedFirstRidePreference;
- (BOOL)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
- (void)setDisableTimerTimestamp:(id)a0;
- (void)setAutomaticDNDActive:(BOOL)a0 withReply:(id /* block */)a1;
- (void)allowedAutoReplyAudience:(id /* block */)a0;
- (double)mostRecentTriggerMethodChange;
- (void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(BOOL)a0;
- (BOOL)isAutomaticDNDInternalForceOverrideEnabledPreference;
- (void)_setupConnection;
- (void)setAutomaticDNDInternalForceOverrideEnabledPreference:(BOOL)a0;
- (void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(BOOL)a0;
- (void)setActivateWithCarPlay:(BOOL)a0;
- (void)autoReplyMessageWithReply:(id /* block */)a0;
- (void)disableDNDUntilEndOfDriveWithContext:(id)a0 reply:(id /* block */)a1;
- (void)setMostRecentTriggerMethodChange:(double)a0;
- (void)setHasAdjustedTriggerMethod:(BOOL)a0;
- (BOOL)hasOptedOutOfAutomaticDND;
- (void)setAutomaticDNDInternalDNDBuddyEnabledPreference:(BOOL)a0;
- (void)_performCARPreferencesBlock:(id /* block */)a0 forReading:(BOOL)a1;
- (void)setStartedFirstRidePreference:(BOOL)a0;
- (BOOL)isAutomaticDNDInternalDNDBuddyPreference;
- (void)_dndStateChanged:(BOOL)a0;
- (void)_resetUserDNDSettingsWithReply:(id /* block */)a0;
- (BOOL)platformSupportsSendingAutoReplies;
- (unsigned long long)automaticDNDTriggeringMethod;
- (BOOL)hasStartedFirstRidePreference;
- (void)disableDNDUntilEndOfDriveWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
- (void)_exitConfirmationStateChanged:(BOOL)a0;
- (id)init;
- (id)disableTimerTimestamp;
- (void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(BOOL)a0;
- (void)fetchAutomaticDNDAssertionWithReply:(id /* block */)a0;
- (void)setCompletedFirstRidePreference:(BOOL)a0;
- (void)setAutomaticDNDTriggerPreference:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)fetchAutomaticDNDExitConfirmationWithReply:(id /* block */)a0;
- (void)setHasMigratedToDriving:(BOOL)a0;
- (void)setAllowedAutoReplyAudience:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)_detachObservers;
- (BOOL)hasAdjustedTriggerMethod;
- (void)setAutoReplyMessage:(id)a0 reply:(id /* block */)a1;
- (BOOL)shouldActivateWithCarPlay;
- (void)setFirstBuddyPresentationFirstMoment:(id)a0;
- (void)fetchAutomaticDNDTriggerPreferenceWithReply:(id /* block */)a0;
- (void)setOptedOutOfAutomaticDND:(BOOL)a0;
- (void)dealloc;
- (void)_xpcFetchWithServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (BOOL)platformSupportsUrgentMessages;
- (BOOL)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
- (void)setAutomaticDNDTriggeringMethod:(unsigned long long)a0;
- (BOOL)hasMigratedToDriving;
- (id)firstBuddyPresentationFirstMoment;
- (BOOL)shouldEnforceInternalWhitelist;

@end
