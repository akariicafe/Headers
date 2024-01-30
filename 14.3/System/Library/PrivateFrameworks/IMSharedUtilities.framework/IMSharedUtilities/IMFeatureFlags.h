@interface IMFeatureFlags : NSObject

@property (readonly, nonatomic) BOOL newConversationListEnabled;
@property (readonly, nonatomic) BOOL conversationPinningEnabled;
@property (readonly, nonatomic) BOOL conversationPinningOnboardingEnabled;
@property (readonly, nonatomic) BOOL conversationPinningSyncEnabled;
@property (readonly, nonatomic) BOOL conversationPinningMultiDragEnabled;
@property (readonly, nonatomic) BOOL conversationPinningTouchdownDimEnabled;
@property (readonly, nonatomic) BOOL conversationPinningUsesLastNameForDuplicatesEnabled;
@property (readonly, nonatomic) BOOL avatarViewAllowsStaleRendering;
@property (readonly, nonatomic) BOOL mentionsEnabled;
@property (readonly, nonatomic) BOOL mentionsKeyboardSuggestionsEnabled;
@property (readonly, nonatomic) BOOL macToolbarEnabled;
@property (readonly, nonatomic) BOOL macApplicationMetricsGatheringEnabled;
@property (readonly, nonatomic) BOOL messageSyncP2Enabled;
@property (readonly, nonatomic) BOOL fullTranscriptLoggingEnabled;

+ (id)sharedInstance;

- (BOOL)loadAllChatsProgressivelyEnabled;
- (BOOL)certifiedDeliveryEnabled;
- (BOOL)fixImagentPriorityInversion;
- (BOOL)manuallyAckMessagesEnabled;
- (BOOL)messagesBlastdoorEnabled;
- (BOOL)fixIMTranscoderAgentPriorityInversion;
- (BOOL)fixIMDPersistenceAgentPriorityInversion;
- (BOOL)messageAppFreezerEnabled;
- (BOOL)isGreenfieldBlastDoorEnabled;
- (BOOL)isImagePreviewBlastDoorEnabled;
- (BOOL)groupPhotoEnabled;
- (BOOL)isGreenfieldEnabled;

@end
