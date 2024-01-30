@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (readonly, nonatomic) char color;
@property (readonly, weak, nonatomic) NSUUID *tuConversationUUID;
@property (readonly, nonatomic, getter=isSenderUnknown) BOOL senderUnknown;

- (Class)balloonViewClass;
- (void)configureBalloonView:(id)a0;
- (id)time;
- (id)sender;
- (BOOL)isFromMe;
- (BOOL)shouldCacheSize;
- (BOOL)isSendersUnknown;

@end
