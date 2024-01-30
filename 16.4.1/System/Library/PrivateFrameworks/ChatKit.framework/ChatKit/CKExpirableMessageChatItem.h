@interface CKExpirableMessageChatItem : CKAttachmentMessagePartChatItem

@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;

- (BOOL)canCopy;
- (BOOL)canForward;
- (BOOL)canExport;
- (BOOL)canSendAsTextMessage;

@end
