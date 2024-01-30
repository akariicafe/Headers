@class NSXPCConnection;

@interface CARAutomaticDNDStatus : NSObject

@property (class, readonly, nonatomic, getter=isAutomaticDNDAvailable) BOOL automaticDNDAvailable;

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) unsigned long long cachedAutomaticDNDActiveState;
@property (copy, nonatomic) id /* block */ statusChangeObserver;
@property (copy, nonatomic) id /* block */ exitConfirmationChangeObserver;

+ (id)_DNDServiceInterface;

- (void)_exitConfirmationStateChanged:(BOOL)a0;
- (void)_setupConnection;
- (void)_dndStateChanged:(BOOL)a0;
- (BOOL)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
- (void)_detachObservers;
- (void)setOptedOutOfAutomaticDND:(BOOL)a0;
- (void)_resetUserDNDSettingsWithReply:(id /* block */)a0;
- (id)disableTimerTimestamp;
- (void)setDisableTimerTimestamp:(id)a0;
- (BOOL)isAutomaticDNDInternalDNDBuddyPreference;
- (BOOL)isAutomaticDNDInternalForceOverrideEnabledPreference;
- (BOOL)shouldActivateWithCarPlay;
- (void)fetchAutomaticDNDAssertionWithReply:(id /* block */)a0;
- (BOOL)hasMigratedToDriving;
- (void)setHasMigratedToDriving:(BOOL)a0;
- (void)allowedAutoReplyAudience:(id /* block */)a0;
- (void)setActivateWithCarPlay:(BOOL)a0;
- (void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(BOOL)a0;
- (id)firstBuddyPresentationFirstMoment;
- (void)setAutomaticDNDInternalDNDBuddyEnabledPreference:(BOOL)a0;
- (double)mostRecentTriggerMethodChange;
- (BOOL)hasAdjustedTriggerMethod;
- (void)autoReplyMessageWithReply:(id /* block */)a0;
- (BOOL)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
- (void)setAllowedAutoReplyAudience:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)disableDNDUntilEndOfDriveWithContext:(id)a0 reply:(id /* block */)a1;
- (void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(BOOL)a0;
- (void)setCompletedFirstRidePreference:(BOOL)a0;
- (void)fetchAutomaticDNDTriggerPreferenceWithReply:(id /* block */)a0;
- (void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(BOOL)a0;
- (void)setAutomaticDNDActive:(BOOL)a0 withReply:(id /* block */)a1;
- (void)dealloc;
- (BOOL)platformSupportsUrgentMessages;
- (BOOL)platformSupportsSendingAutoReplies;
- (void)_xpcFetchWithServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)setAutomaticDNDInternalForceOverrideEnabledPreference:(BOOL)a0;
- (void)_performCARPreferencesBlock:(id /* block */)a0 forReading:(BOOL)a1;
- (void)setAutomaticDNDTriggeringMethod:(unsigned long long)a0;
- (void)setAutoReplyMessage:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (unsigned long long)automaticDNDTriggeringMethod;
- (void)disableDNDUntilEndOfDriveWithReply:(id /* block */)a0;
- (void)setHasAdjustedTriggerMethod:(BOOL)a0;
- (void)setStartedFirstRidePreference:(BOOL)a0;
- (void)fetchAutomaticDNDExitConfirmationWithReply:(id /* block */)a0;
- (BOOL)hasCompletedFirstRidePreference;
- (BOOL)hasOptedOutOfAutomaticDND;
- (void).cxx_destruct;
- (BOOL)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
- (void)setMostRecentTriggerMethodChange:(double)a0;
- (void)setAutomaticDNDTriggerPreference:(unsigned long long)a0 withReply:(id /* block */)a1;
- (BOOL)hasStartedFirstRidePreference;
- (void)setFirstBuddyPresentationFirstMoment:(id)a0;

@end
