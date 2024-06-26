@class TUCall, TUCallProviderManager, TUCallFilterController, NSObject, TUCallServicesInterface, TUAudioDeviceController, NSString, CNContactStore, TUVideoDeviceController, NSArray, TUConversationManager, TURouteController, TUNeighborhoodActivityConduit;
@protocol TUFeatureFlags, OS_dispatch_queue, TUCallContainerPrivate;

@interface TUCallCenter : NSObject <TUCallContainer>

@property (class, readonly, nonatomic) TUCallCenter *sharedInstance;

@property (readonly, nonatomic) id<TUFeatureFlags> featureFlags;
@property (retain, nonatomic) TUCallServicesInterface *callServicesInterface;
@property (retain, nonatomic) TUAudioDeviceController *audioDeviceController;
@property (retain, nonatomic) TUVideoDeviceController *videoDeviceController;
@property (retain, nonatomic) TURouteController *routeController;
@property (retain, nonatomic) TURouteController *pairedHostDeviceRouteController;
@property (retain, nonatomic) TUCallFilterController *callFilterController;
@property (retain, nonatomic) TUNeighborhoodActivityConduit *neighborhoodActivityConduit;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) TUCallProviderManager *providerManager;
@property (retain, nonatomic) TUConversationManager *conversationManager;
@property (nonatomic) struct CGSize { double width; double height; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } localPortraitAspectRatio;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (copy, nonatomic) id /* block */ disconnectCallPreflight;
@property (readonly, nonatomic) id<TUCallContainerPrivate> callContainer;
@property (copy, nonatomic) id /* block */ launchAppForJoinRequestBlock;
@property (readonly, nonatomic) BOOL canMergeCalls;
@property (readonly, nonatomic, getter=isAddCallAllowed) BOOL addCallAllowed;
@property (readonly, nonatomic, getter=isAmbiguous) BOOL ambiguous;
@property (readonly, nonatomic, getter=isEndAndAnswerAllowed) BOOL endAndAnswerAllowed;
@property (readonly, nonatomic, getter=isHoldAndAnswerAllowed) BOOL holdAndAnswerAllowed;
@property (readonly, copy, nonatomic) NSArray *currentCalls;
@property (readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property (readonly, copy, nonatomic) NSArray *incomingCalls;
@property (readonly, copy, nonatomic) NSArray *displayedCalls;
@property (readonly, copy, nonatomic) NSArray *displayedAudioAndVideoCalls;
@property (readonly, copy, nonatomic) NSArray *conferenceParticipantCalls;
@property (readonly, copy, nonatomic) NSArray *callsHostedElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsWithAnEndpointElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsHostedOrAnEndpointElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property (readonly, nonatomic) TUCall *incomingCall;
@property (readonly, nonatomic) TUCall *incomingVideoCall;
@property (readonly, nonatomic) TUCall *activeVideoCall;
@property (readonly, nonatomic) TUCall *currentVideoCall;
@property (readonly, nonatomic) unsigned long long currentCallCount;
@property (readonly, nonatomic) unsigned long long currentVideoCallCount;
@property (readonly, nonatomic) unsigned long long currentAudioAndVideoCallCount;
@property (readonly, nonatomic) unsigned long long callCountOnDefaultPairedDevice;
@property (readonly, nonatomic) BOOL hasCurrentCalls;
@property (readonly, nonatomic) BOOL hasCurrentAudioCalls;
@property (readonly, nonatomic) BOOL hasCurrentVideoCalls;
@property (readonly, nonatomic) BOOL anyCallIsHostedOnCurrentDevice;
@property (readonly, nonatomic) BOOL anyCallIsEndpointOnCurrentDevice;
@property (readonly, copy, nonatomic) NSArray *currentCallGroups;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCallGroups;
@property (readonly, copy, nonatomic) NSArray *callGroupsOnDefaultPairedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callCenterWithQueue:(id)a0 server:(id)a1 shouldRegister:(BOOL)a2;
+ (id)callCenterWithQueue:(id)a0;
+ (id)sharedContactStore;
+ (id)sharedInstanceWithQueue:(id)a0 server:(id)a1 shouldRegister:(BOOL)a2;

- (id)frontmostCall;
- (id)conferenceCall;
- (id)callsPassingTest:(id /* block */)a0;
- (BOOL)allCallsAreOfService:(int)a0;
- (id)audioAndVideoCallsWithStatus:(int)a0;
- (id)displayedCallFromCalls:(id)a0;
- (id)frontmostAudioOrVideoCall;
- (void)registerWithCompletionHandler:(id /* block */)a0;
- (BOOL)existingCallsHaveMultipleProviders;
- (unsigned long long)countOfCallsPassingTest:(id /* block */)a0;
- (id)videoCallWithStatus:(int)a0;
- (id)callWithStatus:(int)a0;
- (id)callPassingTest:(id /* block */)a0 sortedUsingComparator:(id /* block */)a1;
- (id)callPassingTest:(id /* block */)a0;
- (BOOL)allCallsPassTest:(id /* block */)a0;
- (id)callWithCallUUID:(id)a0;
- (id)displayedCall;
- (id)callWithUniqueProxyIdentifier:(id)a0;
- (id)callsWithStatus:(int)a0;
- (void)pullRelayingCallsFromClient;
- (BOOL)anyCallPassesTest:(id /* block */)a0;
- (id)audioOrVideoCallWithStatus:(int)a0;
- (void)swapCalls;
- (id)_allCalls;
- (id)callsWithGroupUUID:(id)a0;
- (id)initWithQueue:(id)a0;
- (BOOL)isRelayCallingSupportedForProvider:(id)a0 isVideo:(BOOL)a1;
- (void)handleActionForWiredHeadsetMiddleButtonPressWithSourceIdentifier:(id)a0 allowBluetoothAnswerWithoutDowngrade:(BOOL)a1 shouldForceDowngradeToAudio:(BOOL)a2;
- (id)_splitSessionErrorWithCode:(long long)a0 underlyingError:(id)a1;
- (BOOL)isHardPauseAvailable;
- (void)disconnectDeviceFromSplitSessionUsingMediaRouteIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 featureFlags:(id)a1;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(id)a0;
- (BOOL)isTakingCallsPrivateAllowed;
- (void)_preflightDisconnectForCalls:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)shouldPreferRelayOverDirectSecondaryCallingForProvider:(id)a0 isVideo:(BOOL)a1;
- (void)answerCall:(id)a0 withSourceIdentifier:(id)a1 wantsHoldMusic:(BOOL)a2;
- (void)reportLocalPreviewStoppedForCall:(id)a0;
- (BOOL)_shouldPreferRelayOverDirectSecondaryCallingForRelayingCallingAvailability:(int)a0 isRelayCallingSupported:(BOOL)a1 isEmergencyCallbackPossible:(BOOL)a2;
- (BOOL)_existingCallsAllowDialRequest:(id)a0 allowVoiceWithData:(BOOL)a1;
- (void)answerCall:(id)a0;
- (void)activateInCallUIWithActivityContinuationIdentifier:(id)a0;
- (void)holdCall:(id)a0;
- (void)pushHostedCallsToDestination:(id)a0;
- (void)groupCall:(id)a0 withOtherCall:(id)a1;
- (void)answerWithRequest:(id)a0;
- (void)disconnectCall:(id)a0 withReason:(int)a1;
- (void)ungroupCall:(id)a0;
- (void)updateCall:(id)a0 withAnswerRequest:(id)a1;
- (id)joinConversationWithConversationRequest:(id)a0;
- (void)pushRelayingCallsToHost;
- (void)launchAppForDialRequest:(id)a0 completion:(id /* block */)a1;
- (id)lastDaemonConnectTime;
- (void)applicationWillLaunchForStartCallInteraction:(id)a0;
- (void)handleActionForWiredHeadsetMiddleButtonPress;
- (BOOL)isHoldAllowed;
- (void)pickRouteForRapportDeviceWithMediaSystemIdentifier:(id)a0 effectiveIdentifier:(id)a1;
- (id)dialWithRequest:(id)a0;
- (void)handleHeadsetButtonPressForActiveCalls;
- (void)requestVideoUpgradeForCall:(id)a0;
- (void)answerCall:(id)a0 withSourceIdentifier:(id)a1;
- (BOOL)isDirectCallingCurrentlyAvailableForProvider:(id)a0 isVideo:(BOOL)a1;
- (void)resumeCall:(id)a0;
- (void)unholdCall:(id)a0;
- (unsigned long long)_callGroupCountForCall:(id)a0 withCall:(id)a1;
- (void)sendUserScoreToRTCReporting:(id)a0 withScore:(int)a1;
- (id)activeConversationForCall:(id)a0;
- (void)enteredBackgroundForAllCalls;
- (void).cxx_destruct;
- (void)shouldAllowRingingCallStatusIndicator:(BOOL)a0;
- (BOOL)canDialWithRequest:(id)a0;
- (BOOL)isSwappable;
- (id)init;
- (id)callServicesClientCapabilities;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)setTTYType:(int)a0 forCall:(id)a1;
- (void)handleActionForWiredHeadsetMiddleButtonLongPress;
- (void)fetchCurrentCalls;
- (void)createSplitSessionWithDeviceMediaRouteIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)endActiveAndAnswerCall:(id)a0;
- (void)endActiveOrHeldAndAnswerCall:(id)a0;
- (void)sendFieldModeDigits:(id)a0 forProvider:(id)a1;
- (void)holdActiveAndAnswerCall:(id)a0;
- (void)shouldSuppressInCallStatusBar:(BOOL)a0;
- (BOOL)isMergeable;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)dealloc;
- (void)answerCallWithHoldMusic:(id)a0;
- (BOOL)_canDialWithRequest:(id)a0 shouldUseRelay:(BOOL *)a1;
- (void)dialWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)disconnectAllCalls;
- (void)enteredForegroundForCall:(id)a0;
- (void)disconnectCall:(id)a0;
- (BOOL)isSendToVoicemailAllowed;
- (void)joinConversationWithRequest:(id)a0;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)endHeldAndAnswerCall:(id)a0;
- (BOOL)launchAppForJoinRequest:(id)a0;
- (BOOL)_isCallingAvailableOnSecondaryDeviceWithRelayCallingAvailability:(int)a0 isProviderAvailable:(BOOL)a1 isRelayAllowed:(BOOL)a2 isEmergency:(BOOL)a3 supportsBasebandCalling:(BOOL)a4 shouldUseRelay:(BOOL *)a5;
- (BOOL)canGroupCall:(id)a0 withCall:(id)a1;
- (id)_dialWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)answerOrJoinCall:(id)a0;
- (void)willEnterBackgroundForAllCalls;
- (BOOL)_isEmergencyDialRequest:(id)a0;

@end
