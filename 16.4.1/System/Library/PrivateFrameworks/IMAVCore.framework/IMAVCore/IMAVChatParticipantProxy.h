@class NSString, IMAVChat, NSDictionary, IMAVChatProxy;

@interface IMAVChatParticipantProxy : NSObject {
    NSDictionary *_info;
    IMAVChatProxy *_chat;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL _inviteDelivered;
@property (readonly, nonatomic) IMAVChat *avChat;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithDictionary:(id)a0 chat:(id)a1;
- (BOOL)isLocalParticipant;

@end
