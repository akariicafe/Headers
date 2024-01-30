@class IMAssistantHandleFromContact, IMHandle;

@interface IMAssistantChatParticipant : NSObject

@property (readonly, nonatomic) IMHandle *imHandle;
@property (readonly, nonatomic) IMAssistantHandleFromContact *handleFromContact;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIMHandle:(id)a0 handleFromContact:(id)a1;

@end
