@class IMMessage, NSArray, NSString, IMMessageItem, NSItemProvider;

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
@property (readonly, nonatomic) BOOL isReply;
@property (readonly, nonatomic) BOOL isReplyContextPreview;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) IMMessageItem *threadOriginator;
@property (readonly, nonatomic) NSItemProvider *dragItemProvider;
@property (readonly, nonatomic) NSArray *pasteboardItemProviders;

- (id)time;
- (void).cxx_destruct;
- (id)aggregateAcknowledgmentChatItem;
- (id)sender;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_isSURFRelatedMessage;
- (unsigned long long)chatItemReplyLineContiguousTypeForChatStyle:(unsigned char)a0;
- (id)supplementaryItemsWithLayoutEnvironment:(id)a0;
- (BOOL)failed;
- (long long)selectedType;
- (BOOL)canCopy;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (void)configureBalloonView:(id)a0;
- (id)description;
- (BOOL)canAttachStickers;
- (BOOL)stickersSnapToPoint;
- (id)votingCounts;
- (BOOL)isFromMe;
- (BOOL)canForward;
- (BOOL)canInlineReply;
- (BOOL)canSendAsTextMessage;
- (BOOL)shouldShowVotingView;
- (id)compositionWithContext:(id)a0;
- (id)fileURLForAttachment;

@end
