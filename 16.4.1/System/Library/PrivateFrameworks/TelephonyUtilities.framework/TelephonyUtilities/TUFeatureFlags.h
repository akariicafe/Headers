@class NSString;

@interface TUFeatureFlags : NSObject <TUFeatureFlags>

@property (readonly, nonatomic) BOOL announceCalls;
@property (readonly, nonatomic) BOOL conversationOneToOneModeEnabled;
@property (readonly, nonatomic) BOOL conversationHandoffEnabled;
@property (readonly, nonatomic) BOOL vouchingEnabled;
@property (readonly, nonatomic) BOOL addTVAsActiveParticipant;
@property (readonly, nonatomic) BOOL groupFacetimeAsAServiceEnabled;
@property (readonly, nonatomic) BOOL filterGFTaaSCalls;
@property (readonly, nonatomic) BOOL gelatoEnabled;
@property (readonly, nonatomic) BOOL collaborateTogetherEnabled;
@property (readonly, nonatomic) BOOL offrampEnabled;
@property (readonly, nonatomic) BOOL uNNotificationsMacOSEnabled;
@property (readonly, nonatomic) BOOL expanseEnabled;
@property (readonly, nonatomic) BOOL sharePlayDisabled;
@property (readonly, nonatomic) BOOL sharePlayDiscoverabilityEnabled;
@property (readonly, nonatomic) BOOL sharePlayWithAirplayEnabled;
@property (readonly, nonatomic) BOOL ftvSpatialAudioEnabled;
@property (readonly, nonatomic) BOOL FTUserScore;
@property (readonly, nonatomic) BOOL livePhotoXPCServiceEnabled;
@property (readonly, nonatomic) BOOL nonInterruptingCalls;
@property (readonly, nonatomic) BOOL qrPluginEncryptionEnabled;
@property (readonly, nonatomic) BOOL unreliableMessengerEnabled;
@property (readonly, nonatomic) BOOL supportsScreenSharing;
@property (readonly, nonatomic) BOOL individualAudioVideoToggleEnabled;
@property (readonly, nonatomic) BOOL expanseBTSwitchingEnabled;
@property (readonly, nonatomic) BOOL TTRBannerEnabled;
@property (readonly, nonatomic) BOOL aTVHandoff;
@property (readonly, nonatomic) BOOL suggestionsReloadForSelectedRecipients;
@property (readonly, nonatomic) BOOL gftDowngradeToOneToOne;
@property (readonly, nonatomic) BOOL uPlusNDowngrade;
@property (readonly, nonatomic) BOOL uPlusOneScreenSharing;
@property (readonly, nonatomic) BOOL requestA2DPOverIncomingCalls;
@property (readonly, nonatomic) BOOL mochiEnabled;
@property (readonly, nonatomic) BOOL screenCaptureKitEnabled;
@property (readonly, nonatomic) BOOL avLessSharePlayEnabled;
@property (readonly, nonatomic) BOOL continuityCaptureEnabled;
@property (readonly, nonatomic) BOOL avcCameraSelectionEnabled;
@property (readonly, nonatomic) BOOL greenTeaLinksEnabled;
@property (readonly, nonatomic) BOOL captionDraggingEnabled;
@property (readonly, nonatomic) BOOL screenSharingCALayerHostMode;
@property (readonly, nonatomic) BOOL screenSharingDeskViewEnabled;
@property (readonly, nonatomic) BOOL screenSharingDeskViewSqueegeeEnabled;
@property (readonly, nonatomic) BOOL gameCenterSharePlayIntegration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)expanseEnabledForMusic;
- (BOOL)expanseEnabledForTV;

@end
