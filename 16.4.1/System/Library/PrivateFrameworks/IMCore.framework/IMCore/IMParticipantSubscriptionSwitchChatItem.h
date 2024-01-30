@class IMHandle;

@interface IMParticipantSubscriptionSwitchChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) IMHandle *otherHandle;

- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 sender:(id)a1 otherHandle:(id)a2;

@end
