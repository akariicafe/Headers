@class SKStatusPublishingService, NSObject;
@protocol DNDSUserAvailabilityTCCProviding, DNDSStateProviding, OS_dispatch_queue, DNDSModeConfigurationProviding;

@interface DNDSUserAvailabilityCoordinator : NSObject {
    BOOL _active;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_extensionLaunchQueue;
    id<DNDSModeConfigurationProviding> _configurationProvider;
    id<DNDSStateProviding> _stateProvider;
    id<DNDSUserAvailabilityTCCProviding> _tccProvider;
    SKStatusPublishingService *_statusService;
}

- (BOOL)isTCCUserAvailabilityGrantedForBundleId:(id)a0;
- (void)sendStatusKitInvitationsForContacts:(id)a0 completionHandler:(id /* block */)a1;
- (void)_publishStatusKitCurrentAvailabilityForced:(BOOL)a0 override:(long long)a1 completionHandler:(id /* block */)a2;
- (void)suspendWithOverrideSetting:(long long)a0 completionHandler:(id /* block */)a1;
- (void)coordinateUserAvailabilityUpdateForApplicationIdentifier:(id)a0 forced:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_publishStatusKitAvailability:(BOOL)a0 activityIdentifier:(id)a1 local:(BOOL)a2 scheduled:(BOOL)a3 date:(id)a4 forced:(BOOL)a5 completion:(id /* block */)a6;
- (BOOL)isLocalUserAvailableForApplicationIdentifier:(id)a0 withError:(out id *)a1;
- (void)_queue_updateAvailabilityKit:(id)a0 fromConfiguration:(id)a1 toConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (id)publishStatusKitAvailabilityReturningError:(out id *)a0;
- (void)suspend;
- (id)_entitlementRecordForApplicationRecord:(id)a0;
- (void)_queue_notifyIntentExtensionsOfUserAvailability:(id)a0 applicationIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithConfigurationProvider:(id)a0 stateProvider:(id)a1 userAvailabilityTCCProvider:(id)a2;
- (BOOL)_queue_didAppAvailabilityChangeForApplicationIdentifier:(id)a0 fromConfiguration:(id)a1 toConfiguration:(id)a2;
- (BOOL)_isTCCUserAvailabilityGrantedForMessages;
- (id)initWithConfigurationProvider:(id)a0 stateProvider:(id)a1;
- (id)allowedModesForContactHandle:(id)a0 withError:(out id *)a1;
- (void)resumeUpdatingInvitationsForContacts:(id)a0 completionHandler:(id /* block */)a1;
- (void)coordinateUserAvailability:(id)a0 fromConfiguration:(id)a1 toConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_isLocalUserAvailableForAppId:(id)a0 modeIdentifier:(id)a1 withError:(out id *)a2;
- (id)silencedModesForContactHandle:(id)a0 withError:(out id *)a1;
- (void)_queue_notifyIntentExtensionsOfUserAvailability:(id)a0 availabilityOverride:(long long)a1 applicationIdentifiers:(id)a2 completionHandler:(id /* block */)a3;
- (id)exceptionalModesForContactHandle:(id)a0 withError:(out id *)a1;
- (void)sendStatusKitInvitationsForContacts:(id)a0 forceAvailabilityPublish:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)userAvailabilityInActiveModeForContactHandle:(id)a0 withError:(out id *)a1;
- (void).cxx_destruct;
- (BOOL)_isLocalUserAvailableForMessagesWithModeIdentifier:(id)a0 withError:(out id *)a1;
- (void)resume;

@end
