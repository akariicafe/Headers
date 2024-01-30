@class IMMessage, NSArray, NSString, IMMessageItem, NSItemProvider, CKMessagePartHighlightChatItem;

@interface CKMessagePartChatItem : CKBalloonChatItem

@property (readonly, copy, nonatomic) NSArray *messageAcknowledgments;
@property (readonly, nonatomic) IMMessage *message;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) char color;
@property (readonly, nonatomic) NSArray *visibleAssociatedMessageChatItems;
@property (readonly, nonatomic) BOOL canSendMessageAcknowledgment;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } messagePartRange;
@property (readonly, nonatomic) BOOL hasMessageAcknowledgment;
@property (readonly, nonatomic) BOOL hasStickers;
@property (readonly, nonatomic) BOOL isCorrupt;
@property (readonly, nonatomic) BOOL isBlackholed;
@property (readonly, nonatomic) CKMessagePartHighlightChatItem *messageHighlightChatItem;
@property (readonly, nonatomic) BOOL isReply;
@property (readonly, nonatomic) BOOL isReplyContextPreview;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) IMMessageItem *threadOriginator;
@property (readonly, nonatomic) NSItemProvider *dragItemProvider;
@property (readonly, nonatomic) NSArray *pasteboardItemProviders;

- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (void)configureBalloonView:(id)a0;
- (id)time;
- (unsigned long long)chatItemReplyLineContiguousTypeForChatStyle:(unsigned char)a0;
- (id)sender;
- (BOOL)_isSURFRelatedMessage;
- (id)tapbackActionButtonImageName;
- (void)_setVisibleAssociatedMessageChatItems:(id)a0;
- (BOOL)__im_ff_isInterstellarEnabled;
- (BOOL)canCopy;
- (id)description;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)compositionWithContext:(id)a0;
- (BOOL)canAttachStickers;
- (BOOL)stickersSnapToPoint;
- (BOOL)isFromMe;
- (id)fileURLForAttachment;
- (long long)selectedType;
- (void).cxx_destruct;
- (BOOL)canSendAsTextMessage;
- (BOOL)shouldShowVotingView;
- (id)votingCounts;
- (BOOL)failed;
- (id)aggregateAcknowledgmentChatItem;
- (BOOL)canInlineReply;
- (BOOL)canForward;

@end
