@class NSDictionary;

@interface IMFeatureFlags : NSObject

@property (readonly, nonatomic) NSDictionary *CKScreenshotTestFeatureFlagMembers;
@property (readonly, nonatomic) BOOL smsMmsBlastDoorEnabled;
@property (readonly, nonatomic) BOOL animatedImagesBlastDoorEnabled;
@property (readonly, nonatomic) BOOL translationEnabled;
@property (readonly, nonatomic) BOOL conversationPinningMultiDragEnabled;
@property (readonly, nonatomic) BOOL conversationPinningTouchdownDimEnabled;
@property (readonly, nonatomic) BOOL conversationPinningUsesLastNameForDuplicatesEnabled;
@property (readonly, nonatomic) BOOL avatarViewAllowsStaleRendering;
@property (readonly, nonatomic) BOOL showAllInstalledMessageApps;
@property (readonly, nonatomic) BOOL showKettleAvailability;
@property (readonly, nonatomic) BOOL notificationCommunicationContextEnabled;
@property (readonly, nonatomic) BOOL sendSMSAutoReplyDuringUnavailability;
@property (readonly, nonatomic) BOOL mentionsEnabled;
@property (readonly, nonatomic) BOOL mentionsKeyboardSuggestionsEnabled;
@property (readonly, nonatomic) BOOL macToolbarEnabled;
@property (readonly, nonatomic) BOOL macApplicationMetricsGatheringEnabled;
@property (readonly, nonatomic) BOOL messageSyncP2Enabled;
@property (readonly, nonatomic) BOOL fullTranscriptLoggingEnabled;
@property (readonly, nonatomic) BOOL chatCacheEnabled;
@property (readonly, nonatomic) BOOL micGroupPhotoEnabled;
@property (readonly, nonatomic) BOOL simSwitcherEnabled;
@property (readonly, nonatomic) BOOL commSafetyUIEnabled;
@property (readonly, nonatomic) BOOL commSafetyInternalEnabled;
@property (readonly, nonatomic) BOOL businessBrandedNewCompose;
@property (readonly, nonatomic) BOOL businessGreeting;
@property (readonly, nonatomic) BOOL micInlineReplyBackfillEnabled;
@property (readonly, nonatomic) BOOL threeColumnLayoutEnabled;
@property (readonly, nonatomic) BOOL newInboxViewEnabled;
@property (readonly, nonatomic) BOOL simPickerForMFMessageComposeViewEnabled;
@property (readonly, nonatomic) BOOL smsfilterForBrazilEnabled;
@property (readonly, nonatomic) BOOL supplementalLexiconMentionsEnabled;
@property (readonly, nonatomic) BOOL newSuggestionsBannerEnabled;
@property (readonly, nonatomic) BOOL uiConsistencyEnabled;
@property (readonly, nonatomic) BOOL systemImageAdoptionEnabled;
@property (readonly, nonatomic) BOOL messagesNotificationFilteringUIEnabled;
@property (readonly, nonatomic) BOOL isExpanseEnabled;
@property (readonly, nonatomic) BOOL improvedPriorityInversionFixEnabled;
@property (readonly, nonatomic) BOOL threeAttachmentStackEnabled;

+ (id)sharedInstance;

- (BOOL)isGreenfieldBlastDoorEnabled;
- (BOOL)loadAllChatsProgressivelyEnabled;
- (BOOL)manuallyAckMessagesEnabled;
- (BOOL)photoAnalysisInSpotlightEnabled;
- (BOOL)hubbleTranscriptEnabled;
- (BOOL)allCallOptionsInNavBarButtonEnabled;
- (BOOL)isUnknownGroupSendersEnabled;
- (BOOL)messagesBlastdoorEnabled;
- (BOOL)hubbleCMMProcessingEnabled;
- (BOOL)hubbleUIEnabled;
- (BOOL)messageAppFreezerEnabled;
- (BOOL)isCKScreenshotTestFeatureFlagMember:(id)a0 withDomain:(id)a1;
- (BOOL)fixIMDPersistenceAgentPriorityInversion;
- (BOOL)CKScreenshotTestFeatureFlagValue;
- (BOOL)modernAppPresentationEnabled;
- (BOOL)isBlastDoorAttachmentPreviewEnabled;
- (BOOL)isGreenfieldEnabled;
- (BOOL)isAudioPreviewBlastDoorEnabled;
- (BOOL)certifiedDeliveryEnabled;
- (BOOL)psEnabled;
- (BOOL)fixIMTranscoderAgentPriorityInversion;
- (BOOL)isInterstellarEnabled;
- (BOOL)isImagePreviewBlastDoorEnabled;
- (BOOL)fixImagentPriorityInversion;
- (BOOL)isPassKitBlastDoorEnabled;

@end
