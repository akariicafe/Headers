@class NSString, IMMessageItem, NSArray, IMMessagePartHighlightChatItem, NSAttributedString;

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost>

@property (readonly, copy, nonatomic) NSString *threadIdentifierForTapback;
@property (nonatomic, setter=_setIndex:) long long index;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } messagePartRange;
@property (nonatomic) BOOL chatInScrutinyMode;
@property (nonatomic, getter=isAllowlistedRichLinkSender) BOOL allowlistedRichLinkSender;
@property (nonatomic) unsigned long long replyCount;
@property (readonly, copy, nonatomic) NSAttributedString *text;
@property (readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } originalMessagePartRange;
@property (readonly, nonatomic) BOOL hasSubject;
@property (nonatomic) BOOL isBusiness;
@property (readonly, nonatomic) BOOL isEditedMessagePart;
@property (readonly, nonatomic) BOOL isFailedEditMessagePart;
@property (readonly, nonatomic) BOOL isRetractedMessagePart;
@property (readonly, nonatomic) BOOL isFailedRetractMessagePart;
@property (readonly, nonatomic) BOOL isCorrupt;
@property (readonly, nonatomic) BOOL requiresSiriAttribution;
@property (readonly, nonatomic) BOOL requiresFaceTimeAttribution;
@property (nonatomic, getter=isStewie) BOOL stewie;
@property (nonatomic) long long stewieConversationID;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) IMMessageItem *threadOriginator;
@property (readonly, nonatomic) long long syndicationType;
@property (readonly, nonatomic) long long syndicationStatus;
@property (readonly, copy, nonatomic) IMMessagePartHighlightChatItem *messageHighlightChatItem;
@property (readonly, nonatomic) long long syndicationBehavior;
@property (retain, nonatomic, setter=_setVisibleAssociatedMessageChatItems:) NSArray *visibleAssociatedMessageChatItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_attachmentStackAggregationThreshold;
+ (BOOL)isSiriEnabled;
+ (id)_newMessagePartsForMessageItem:(id)a0 chatContext:(id)a1 photosPluginPayload:(id)a2;
+ (id)_newMessagePartsForMessageItem:(id)a0;
+ (id)messageBodyStringForCMMMessage:(id)a0;
+ (id)_additionalSupportedRichLinkSchemesForAllowlistedSender:(id)a0;
+ (id)_defaultRichLinkAllowlist;
+ (id)_guidForMessage:(id)a0 url:(id)a1;
+ (BOOL)_isAllowlistedRichLinkSender:(id)a0 isBusiness:(BOOL)a1;
+ (BOOL)_isAllowlistedURL:(id)a0;
+ (id)_messageItemWithPartsDeleted:(id)a0 fromMessageItem:(id)a1 indexesOfItemsDeleted:(id *)a2 indexToRangeMapping:(id *)a3;
+ (id)_newDetonatedMessagePartsForMessageItem:(id)a0 chatContext:(id)a1 photosPluginPayload:(id)a2;
+ (id)_newMessagePartsForMessageItem:(id)a0 chatContext:(id)a1;
+ (id)_richLinkRangesForMessageText:(id)a0 sender:(id)a1 isAllowlistedRichLinkSender:(BOOL)a2;
+ (BOOL)_shouldAggregateForTransferType:(id)a0;
+ (BOOL)_supportsRichLinkURL:(id)a0 forSender:(id)a1 isAllowlistedRichLinkSender:(BOOL)a2;
+ (id)aggregatePartsForParts:(id)a0 forMessage:(id)a1 context:(id)a2;
+ (id)chatItemGUIDForMessageGUID:(id)a0 partIndex:(long long)a1;
+ (id)messageBodyStringForAttachmentGUIDs:(id)a0;

- (BOOL)isHighlighted;
- (unsigned char)contentType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canDelete;
- (void).cxx_destruct;
- (BOOL)canRetract;
- (BOOL)canSendMessageAcknowledgment;
- (id)messageSummaryInfo;
- (void)setIsStewie:(BOOL)a0;
- (id)transcriptText;
- (id)_initWithItem:(id)a0 index:(long long)a1 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_initWithItem:(id)a0 index:(long long)a1 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 syndicationBehavior:(long long)a3;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 visibleAssociatedMessageChatItems:(id)a4;
- (long long)messagePartAttributeName;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;

@end
