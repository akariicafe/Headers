@interface CKExpirableMessageChatItem : CKAttachmentMessagePartChatItem

@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;

- (BOOL)canExport;
- (BOOL)canCopy;
- (BOOL)canSendAsTextMessage;
- (BOOL)canForward;

@end
