@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (readonly, nonatomic) char color;
@property (readonly, weak, nonatomic) NSUUID *tuConversationUUID;

- (id)time;
- (id)sender;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)a0;
- (BOOL)isFromMe;
- (BOOL)shouldCacheSize;

@end
