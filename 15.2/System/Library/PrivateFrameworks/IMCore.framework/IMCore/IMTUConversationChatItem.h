@class IMHandle, NSUUID, TUConversation, NSDate;

@interface IMTUConversationChatItem : IMTranscriptChatItem

@property (readonly, weak, nonatomic) TUConversation *tuConversation;
@property (readonly, nonatomic) NSUUID *tuConversationUUID;
@property (readonly, nonatomic) IMHandle *conversationInitiator;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSDate *time;

- (BOOL)canDelete;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)activeCall;
- (id)_initWithItem:(id)a0 conversationInitiator:(id)a1;

@end
