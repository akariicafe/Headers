@class IMAssistantHandleFromContact, IMHandle;

@interface IMAssistantChatParticipant : NSObject

@property (readonly, nonatomic) IMHandle *imHandle;
@property (readonly, nonatomic) IMAssistantHandleFromContact *handleFromContact;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIMHandle:(id)a0 handleFromContact:(id)a1;

@end
