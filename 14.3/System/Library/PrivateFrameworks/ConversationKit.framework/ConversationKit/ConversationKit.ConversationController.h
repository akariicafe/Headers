@class NSString;

@interface ConversationKit.ConversationController : NSObject <TUAudioFrequencyControllerDelegate, TUMomentsControllerDelegate, AVCRemoteVideoClientDelegate> {
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ remoteParticipants;
    void /* unknown type, empty encoding */ includeLocalParticipantInVisibleParticipants;
    void /* unknown type, empty encoding */ carPlayDisconnectRequiresLocalVideoEnable;
    void /* unknown type, empty encoding */ audioFrequencyController;
    void /* unknown type, empty encoding */ audioCallbackQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_momentsController;
    void /* unknown type, empty encoding */ lastRegisteredMomentsProvider;
    void /* unknown type, empty encoding */ blockedCallerLookupQueue;
    void /* unknown type, empty encoding */ recentPresentationContexts;
    void /* unknown type, empty encoding */ scheduledIsChangingMirroredVideoResetDates;
    void /* unknown type, empty encoding */ conversationState;
    void /* unknown type, empty encoding */ deviceOrientation;
    void /* unknown type, empty encoding */ broadcastingState;
    void /* unknown type, empty encoding */ didAddVisibleParticipant;
    void /* unknown type, empty encoding */ didRemoveVisibleParticipant;
    void /* unknown type, empty encoding */ didUpdateVisibleParticipant;
    void /* unknown type, empty encoding */ visibleParticipantDidBecomeActive;
    void /* unknown type, empty encoding */ didStartVideoForVisibleParticipant;
    void /* unknown type, empty encoding */ participantsMediaPrioritiesDidChange;
    void /* unknown type, empty encoding */ participantAudioPowerDidChange;
    void /* unknown type, empty encoding */ audioRouteDidChange;
    void /* unknown type, empty encoding */ cameraZoomAvailabiltyDidChange;
    void /* unknown type, empty encoding */ carPlayConnectedDidChange;
    void /* unknown type, empty encoding */ didUpdateLocalParticipant;
    void /* unknown type, empty encoding */ didUpdateRecordingLocalVideo;
    void /* unknown type, empty encoding */ didStartVideoForLocalParticipant;
    void /* unknown type, empty encoding */ conversationStateDidChange;
    void /* unknown type, empty encoding */ blockedParticipantsAdded;
    void /* unknown type, empty encoding */ blocklistCheckedHandles;
    void /* unknown type, empty encoding */ needsUserConfirmationForBlockedCaller;
    void /* unknown type, empty encoding */ enableVideoOnJoin;
    void /* unknown type, empty encoding */ participantMediaProviderCreator;
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ call;
    void /* unknown type, empty encoding */ blockedCallerChecker;
    void /* unknown type, empty encoding */ conversationUUID;
    void /* unknown type, empty encoding */ localVideoRecordingTransactionID;
}

@property (nonatomic, readonly) NSString *description;

- (void)momentsController:(id)a0 didUpdateCapabilities:(id)a1 forProvider:(id)a2;
- (void)frequencyController:(id)a0 audioPowerChanged:(float)a1 forParticipantWithStreamToken:(long long)a2;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)a0;
- (void)remoteVideoClient:(id)a0 remoteVideoDidPause:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 videoDidDegrade:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 videoDidSuspend:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 remoteVideoAttributesDidChange:(id)a1;
- (void)handleLocalVideoPreviewFirstFrameArrived:(id)a0;
- (void)handleSendingVideoChanged:(id)a0;
- (void)handleCameraZoomBecameAvailable:(id)a0;
- (void)handleCameraZoomBecameUnavailable:(id)a0;
- (void)handleLocalPreviewChanged:(id)a0;
- (void)handleScreenConnectionDidUpdate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
