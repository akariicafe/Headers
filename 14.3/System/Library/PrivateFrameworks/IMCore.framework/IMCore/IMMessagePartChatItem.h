@class NSArray, NSString, IMMessageItem, NSAttributedString;

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } messagePartRange;
@property (nonatomic) BOOL chatInScrutinyMode;
@property (nonatomic, getter=isWhitelistedRichLinkSender) BOOL whitelistedRichLinkSender;
@property (nonatomic) unsigned long long replyCount;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSAttributedString *text;
@property (readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText;
@property (readonly, nonatomic) NSArray *messageEditChatItems;
@property (nonatomic) BOOL isBusiness;
@property (readonly, nonatomic) BOOL isCorrupt;
@property (readonly, nonatomic) BOOL requiresSiriAttribution;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) IMMessageItem *threadOriginator;
@property (retain, nonatomic, setter=_setVisibleAssociatedMessageChatItems:) NSArray *visibleAssociatedMessageChatItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newMessagePartsForMessageItem:(id)a0;
+ (id)_newMessagePartsForMessageItem:(id)a0 shouldDisplayLink:(BOOL)a1 isBusiness:(BOOL)a2 parentChatIsSpam:(BOOL)a3 hasKnownParticipants:(BOOL)a4;
+ (id)_defaultRichLinkWhiteList;
+ (id)_additionalSupportedRichLinkSchemesForWhitelistedSender:(id)a0;
+ (BOOL)_isWhitelistedRichLinkSender:(id)a0 isBusiness:(BOOL)a1;
+ (id)_richLinkRangesForMessageText:(id)a0 sender:(id)a1 isWhitelistedRichLinkSender:(BOOL)a2;
+ (BOOL)_isWhiteListedURL:(id)a0;
+ (BOOL)_supportsRichLinkURL:(id)a0 forSender:(id)a1 isWhitelistedRichLinkSender:(BOOL)a2;
+ (id)_guidForMessage:(id)a0 url:(id)a1;
+ (BOOL)_shouldAggregateForTransferType:(id)a0;
+ (BOOL)isSiriEnabled;
+ (id)_messageItemWithPartsDeleted:(id)a0 fromMessageItem:(id)a1 indexesOfItemsDeleted:(id *)a2 indexToRangeMapping:(id *)a3;

- (void).cxx_destruct;
- (BOOL)canSendMessageAcknowledgment;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)transcriptText;
- (BOOL)canDelete;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 visibleAssociatedMessageChatItems:(id)a4;
- (id)_initWithItem:(id)a0 index:(long long)a1 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_setMessageEditChatItems:(id)a0;
- (id)replyContextPreviewChatItemForReply:(id)a0;

@end
