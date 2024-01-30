@class NSString;

@interface TUFeatureFlags : NSObject <TUFeatureFlags>

@property (readonly, nonatomic) BOOL announceCalls;
@property (readonly, nonatomic) BOOL conversationOneToOneModeEnabled;
@property (readonly, nonatomic) BOOL expanseEnabled;
@property (readonly, nonatomic) BOOL sharePlayDisabled;
@property (readonly, nonatomic) BOOL ftvSpatialAudioEnabled;
@property (readonly, nonatomic) BOOL FTUserScore;
@property (readonly, nonatomic) BOOL gondolaBoat;
@property (readonly, nonatomic) BOOL gondolaCreateCallUI;
@property (readonly, nonatomic) BOOL gondolaOpenLinksInFaceTime;
@property (readonly, nonatomic) BOOL gondolaNotifications;
@property (readonly, nonatomic) BOOL gondolaOar;
@property (readonly, nonatomic) BOOL gondolaShareLinkInAdvance;
@property (readonly, nonatomic) BOOL gondolaEnforceDelegationIntent;
@property (readonly, nonatomic) BOOL kettleFeatureComplete;
@property (readonly, nonatomic) BOOL livePhotoXPCServiceEnabled;
@property (readonly, nonatomic) BOOL nonInterruptingCalls;
@property (readonly, nonatomic) BOOL qrPluginEnabled;
@property (readonly, nonatomic) BOOL qrPluginEncryptionEnabled;
@property (readonly, nonatomic) BOOL supportsScreenSharing;
@property (readonly, nonatomic) BOOL individualAudioVideoToggleEnabled;
@property (readonly, nonatomic) BOOL expanseBTSwitchingEnabled;
@property (readonly, nonatomic) BOOL TTRBannerEnabled;
@property (readonly, nonatomic) BOOL aTVHandoff;
@property (readonly, nonatomic) BOOL suggestionsReloadForSelectedRecipients;
@property (readonly, nonatomic) BOOL gftDowngradeToOneToOne;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)expanseEnabledForTV;
- (BOOL)expanseEnabledForMusic;

@end
