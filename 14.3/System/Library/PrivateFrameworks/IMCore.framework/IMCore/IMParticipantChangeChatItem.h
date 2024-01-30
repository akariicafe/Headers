@class IMHandle;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) IMHandle *otherHandle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 sender:(id)a1 otherHandle:(id)a2;

@end
