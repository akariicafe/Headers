@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (readonly, nonatomic) char color;
@property (readonly, weak, nonatomic) NSUUID *tuConversationUUID;
@property (readonly, nonatomic, getter=isSenderUnknown) BOOL senderUnknown;
@property (readonly, nonatomic) unsigned long long conversationAVMode;

- (id)time;
- (id)sender;
- (BOOL)isFromMe;
- (BOOL)shouldCacheSize;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)a0;
- (id)faceTimeConversation;
- (BOOL)isSendersUnknown;

@end
