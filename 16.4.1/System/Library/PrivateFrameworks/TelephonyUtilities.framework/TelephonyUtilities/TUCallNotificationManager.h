@class NSNotificationCenter, NSMutableArray;

@interface TUCallNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *deferredNotificationBlocks;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;

- (void)mediaStalledChangedForCall:(id)a0;
- (void)postNotificationsForCall:(id)a0 usingComparisonCall:(id)a1;
- (void)isUsingBasebandChangedForCall:(id)a0;
- (void)prefersExclusiveAccessToCellularNetworkChangedForCall:(id)a0;
- (void)conferenceParticipantCallsChangedForCallContainer:(id)a0 conferenceParticipantCalls:(id)a1;
- (void)postNotificationsForCall:(id)a0 afterUpdatesInBlock:(id /* block */)a1;
- (void)hasSentInvitationChangedForCall:(id)a0;
- (void)providerContextChangedForCall:(id)a0;
- (void)supportsTTYWithVoiceChangedForCall:(id)a0;
- (void)hardPauseDigitsStateChangedForCall:(id)a0;
- (void)remoteAspectRatioChangedForCall:(id)a0;
- (void)displayContextChangedForCall:(id)a0;
- (void)hasBeenRedirectedChangedForCall:(id)a0;
- (void)cameraTypeChangedForCall:(id)a0;
- (void)localSenderIdentityAccountUUIDChangedForCall:(id)a0;
- (void)deferNotificationsUntilAfterPerformingBlock:(id /* block */)a0;
- (void)_postNotificationName:(id)a0 object:(id)a1;
- (void)destinationIDChangedForCall:(id)a0;
- (void)shouldSuppressRingtoneChangedForCall:(id)a0;
- (void)remoteScreenAspectRatioChangedForCall:(id)a0;
- (void)connectingChangedForCall:(id)a0;
- (void)connectedChangedForCall:(id)a0;
- (void)videoDegradedChangedForCall:(id)a0;
- (void)ttyTypeChangedForCall:(id)a0;
- (void)videoPausedChangedForCall:(id)a0;
- (void)sharingScreenChangedForCall:(id)a0;
- (void)postNotificationsForCall:(id)a0 usingComparisonCall:(id)a1 afterUpdatesInBlock:(id /* block */)a2;
- (void)isFailureExpectedChangedForCall:(id)a0;
- (id)initWithNotificationCenter:(id)a0;
- (void)remoteUplinkMutedChangedForCall:(id)a0;
- (void)mediaPropertiesChangedForCall:(id)a0 remoteAspectRatioDidChange:(BOOL)a1 remoteCameraOrientationDidChange:(BOOL)a2;
- (void)endpointOnCurrentDeviceChangedForCall:(id)a0;
- (void)isUplinkMutedChangedForCall:(id)a0;
- (void)remoteScreenOrientationChangedForCall:(id)a0;
- (void)mixesVoiceWithMediaChangedForCall:(id)a0;
- (void)remoteCameraOrientationChangedForCall:(id)a0;
- (void)_postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (void)isOnHoldChangedForCall:(id)a0;
- (void)remoteVideoContentRectChangedForCall:(id)a0;
- (void)faceTimeIDStatusChangedForCall:(id)a0;
- (void)statusChangedForCall:(id)a0;
- (void)isSendingVideoChangedForCall:(id)a0;
- (void)supportsEmergencyFallbackChangedForCall:(id)a0;
- (void)needsManualInCallSoundsChangedForCall:(id)a0;
- (void)audioPropertiesChangedForCall:(id)a0;
- (void)modelChangedForCall:(id)a0;
- (void)videoStreamTokenChangedForCall:(id)a0;
- (void)isEmergencyChangedForCall:(id)a0;
- (void)isSendingAudioChangedForCall:(id)a0;
- (void)bluetoothAudioFormatChangedForCall:(id)a0;
- (void)postNotificationsForCallContainer:(id)a0 afterUpdatesInBlock:(id /* block */)a1;
- (void)videoMirroredChangedForCall:(id)a0;
- (void).cxx_destruct;
- (void)isThirdPartyVideoChangedForCall:(id)a0;
- (void)wantsHoldMusicChangedForCall:(id)a0;
- (void)conversationChangedForCall:(id)a0;

@end
