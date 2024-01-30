@interface IMFeatureFlags : NSObject

@property (class, readonly, nonatomic) IMFeatureFlags *sharedFeatureFlags;

@property (readonly, nonatomic) BOOL conversationPinningMultiDragEnabled;
@property (readonly, nonatomic) BOOL conversationPinningTouchdownDimEnabled;
@property (readonly, nonatomic) BOOL conversationPinningUsesLastNameForDuplicatesEnabled;
@property (readonly, nonatomic) BOOL avatarViewAllowsStaleRendering;
@property (readonly, nonatomic) BOOL showAllInstalledMessageApps;
@property (readonly, nonatomic) BOOL mentionsKeyboardSuggestionsEnabled;
@property (readonly, nonatomic) BOOL macToolbarEnabled;
@property (readonly, nonatomic) BOOL macApplicationMetricsGatheringEnabled;
@property (readonly, nonatomic) BOOL messageSyncP2Enabled;
@property (readonly, nonatomic) BOOL fullTranscriptLoggingEnabled;
@property (readonly, nonatomic) BOOL chatCacheEnabled;
@property (readonly, nonatomic) BOOL micGroupPhotoEnabled;
@property (readonly, nonatomic) BOOL commSafetyUIEnabled;
@property (readonly, nonatomic) BOOL commSafetyInternalEnabled;
@property (readonly, nonatomic) BOOL businessGreeting;
@property (readonly, nonatomic) BOOL threeColumnLayoutEnabled;
@property (readonly, nonatomic) BOOL stewieEnabled;
@property (readonly, nonatomic) BOOL supplementalLexiconMentionsEnabled;
@property (readonly, nonatomic) BOOL uiConsistencyEnabled;
@property (readonly, nonatomic) BOOL isExpanseEnabled;
@property (readonly, nonatomic) BOOL improvedPriorityInversionFixEnabled;
@property (readonly, nonatomic) BOOL threeAttachmentStackEnabled;
@property (readonly, nonatomic, getter=isUnitTestableFeatureEnabled) BOOL unitTestableFeatureEnabled;
@property (readonly, nonatomic, getter=isUnitTestableFeatureForNewPlatformEnabled) BOOL unitTestableFeatureForNewPlatformEnabled;
@property (readonly, nonatomic, getter=isModernXPCEnabled) BOOL modernXPCEnabled;
@property (readonly, nonatomic, getter=isFocusFilteringInConversationListEnabled) BOOL focusFilteringInConversationListEnabled;
@property (readonly, nonatomic, getter=isMarkUnreadEnabled) BOOL markUnreadEnabled;
@property (readonly, nonatomic, getter=isSiriLinkEnabled) BOOL siriLinkEnabled;
@property (readonly, nonatomic, getter=isRecentlyDeletedEnabled) BOOL recentlyDeletedEnabled;
@property (readonly, nonatomic, getter=isGelatoCoreEnabled) BOOL gelatoCoreEnabled;
@property (readonly, nonatomic, getter=isGelatoNoticesEnabled) BOOL gelatoNoticesEnabled;
@property (readonly, nonatomic, getter=isNewAudioMessageFlowEnabled) BOOL newAudioMessageFlowEnabled;
@property (readonly, nonatomic, getter=isMessageRetractionEnabled) BOOL messageRetractionEnabled;
@property (readonly, nonatomic, getter=isMessageRetractionDemoModeEnabled) BOOL messageRetractionDemoModeEnabled;
@property (readonly, nonatomic, getter=isBackgroundAudioEnabled) BOOL backgroundAudioEnabled;
@property (readonly, nonatomic, getter=isMessageEditingEnabled) BOOL messageEditingEnabled;
@property (readonly, nonatomic, getter=isMessageEditingHistoryViewingEnabled) BOOL messageEditingHistoryViewingEnabled;
@property (readonly, nonatomic, getter=isMessageEditingBackwardCompatabilityEnabled) BOOL messageEditingBackwardCompatabilityEnabled;
@property (readonly, nonatomic, getter=isTranscriptSharingEnabled) BOOL transcriptSharingEnabled;
@property (readonly, nonatomic, getter=isSMSFilterEnabledForUS) BOOL smsFilterForUS;
@property (readonly, nonatomic, getter=isSMSFilterEnabledForUK) BOOL smsFilterForUK;
@property (readonly, nonatomic, getter=isMessagesIniCloudVersion2) BOOL messagesIniCloudVersion2;
@property (readonly, nonatomic, getter=isCarrierReportJunkEnabled) BOOL carrierReportJunk;
@property (readonly, nonatomic, getter=isAVLessSharePlayEnabled) BOOL AVLessSharePlayEnabled;
@property (readonly, nonatomic, getter=isReducedChatCacheSizeEnabled) BOOL reducedChatCacheSizeEnabled;
@property (readonly, nonatomic, getter=isFluidHistoryLoadingEnabled) BOOL fluidHistoryLoadingEnabled;
@property (readonly, nonatomic, getter=isNotificationActionsEnabled) BOOL notificationActionsEnabled;
@property (readonly, nonatomic, getter=isTapbackInferenceEnabled) BOOL tapbackInferenceEnabled;
@property (readonly, nonatomic, getter=isSWYAttachmentsEnabled) BOOL SWYAttachmentsEnabled;
@property (readonly, nonatomic, getter=arePreResolvedSiriMatchesEnabled) BOOL arePreResolvedSiriMatchesEnabled;
@property (readonly, nonatomic, getter=isOscarEnabled) BOOL oscarEnabled;
@property (readonly, nonatomic, getter=isCroppingAvoidanceEnabled) BOOL croppingAvoidanceEnabled;

+ (id)sharedInstance;
+ (void)testWithFeature:(SEL)a0 block:(id /* block */)a1;
+ (void)testWithFeature:(SEL)a0 enabled:(BOOL)a1 block:(id /* block */)a2;

- (BOOL)photoAnalysisInSpotlightEnabled;
- (BOOL)fixImagentPriorityInversion;
- (BOOL)allCallOptionsInNavBarButtonEnabled;
- (BOOL)isGreenfieldEnabled;
- (BOOL)isFocusFilteringInConversationListEnabledForMessages;
- (BOOL)isCKScreenshotTestFeatureFlagMember:(id)a0 withDomain:(id)a1;
- (BOOL)fixIMTranscoderAgentPriorityInversion;
- (BOOL)loadAllChatsProgressivelyEnabled;
- (BOOL)isUnknownGroupSendersEnabled;
- (BOOL)CKScreenshotTestFeatureFlagValue;
- (BOOL)certifiedDeliveryEnabled;
- (id)CKScreenshotTestFeatureFlagMembers;
- (BOOL)modernAppPresentationEnabled;
- (BOOL)fixIMDPersistenceAgentPriorityInversion;
- (BOOL)manuallyAckMessagesEnabled;
- (BOOL)messageAppFreezerEnabled;

@end
