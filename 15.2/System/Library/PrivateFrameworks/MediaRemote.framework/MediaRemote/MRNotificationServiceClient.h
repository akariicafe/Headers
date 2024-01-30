@class MRMediaRemoteServiceClient;

@interface MRNotificationServiceClient : NSObject {
    MRMediaRemoteServiceClient *_serviceClient;
}

- (void)registerCallbacks;
- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (void)_postDefaultAppilicationNotifications:(id)a0;
- (void)_handlePlayerDidUnregisterNotification:(id)a0;
- (void)_handlePlayerNowPlayingInfoDidChangeNotification:(id)a0;
- (void)_handleApplicationDidUnregisterNotification:(id)a0;
- (BOOL)_processNeedsNonPlayerPathBasedNotificationsForBackwardCompatabilitySupport;
- (void)_handlePlayerPlaybackStateDidChangeNotification:(id)a0;
- (void)_handlePlayerIsPlayingDidChangeNotification:(id)a0;
- (void)_processActiveOriginInvalidationHandlersForNotification:(id)a0;
- (void)_handleApplicationDidRegisterNotification:(id)a0;
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)a0;
- (void)_handleActiveApplicationDidChangeNotification:(id)a0;
- (void)_handleVolumeDidChangeNotification:(id)a0;
- (void)_handleOriginDidUnregisterNotification:(id)a0;
- (void)_processPlayerInvalidationHandlersForNotification:(id)a0;
- (void)_processActiveApplicationInvalidationHandlersForNotification:(id)a0;
- (void)_processOriginInvalidationHandlersForNotification:(id)a0;
- (void)_postDefaultOriginNotifications:(id)a0;
- (void).cxx_destruct;
- (void)_handleOriginDidRegisterNotification:(id)a0;
- (void)_notificationFired:(id)a0 clientNotification:(id)a1 originNotification:(id)a2 nowPlayingNotification:(id)a3;
- (BOOL)_shouldPostNotifications;
- (void)_handleApplicationClientStateDidChangeNotification:(id)a0;
- (void)_handleVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)_notificationFired:(id)a0 playerPathNotifcation:(id)a1 originNotification:(id)a2 nowPlayingNotification:(id)a3;
- (void)_processApplicationInvalidationHandlersForNotification:(id)a0;
- (void)_handlePlayerStateDidChangeNotification:(id)a0;
- (id)initWithServiceClient:(id)a0;
- (void)_handlePlayerSupportedCommandsDidChangeNotification:(id)a0;
- (void)_processActivePlayerInvalidationHandlersForNotification:(id)a0;
- (void)_handlePlayerContentItemArtworkDidChangeNotification:(id)a0;
- (void)_handlePlayerDidRegisterNotification:(id)a0;
- (void)_handleApplicationDisplayNameDidChangeNotification:(id)a0;
- (void)_postDefaultPlayerNotificationsWithUserInfo:(id)a0 object:(id)a1;
- (void)_handlePlayerContentItemsDidChangeNotification:(id)a0;
- (void)_handleActiveOriginDidChangeNotification:(id)a0;
- (void)_handleApplicationDidForegroundNotification:(id)a0;
- (void)_handleActivePlayerDidChangeNotification:(id)a0;
- (void)_handlePlayerPlaybackQueueDidChangeNotification:(id)a0;
- (void)_notificationFired:(id)a0 originNotification:(id)a1 nowPlayingNotification:(id)a2;

@end
