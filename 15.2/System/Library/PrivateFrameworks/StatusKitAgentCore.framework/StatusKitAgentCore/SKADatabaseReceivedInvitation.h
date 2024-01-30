@class NSData, NSString, SKInvitationPayload, MPStatusKitIncomingRatchet, SKHandle, NSDate;

@interface SKADatabaseReceivedInvitation : NSObject

@property (readonly, nonatomic) SKHandle *invitedSKHandle;
@property (readonly, nonatomic) SKHandle *senderSKHandle;
@property (readonly, nonatomic) MPStatusKitIncomingRatchet *incomingRatchet;
@property (readonly, nonatomic) SKInvitationPayload *skInvitationPayload;
@property (readonly, nonatomic) NSString *senderHandle;
@property (readonly, nonatomic) NSString *invitedHandle;
@property (readonly, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, nonatomic) NSString *invitationIdentifier;
@property (readonly, nonatomic) NSDate *dateInvitationCreated;
@property (readonly, nonatomic) NSData *incomingRatchetState;
@property (readonly, nonatomic) NSData *invitationPayload;

+ (id)logger;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInvitationIdentifier:(id)a0 senderHandle:(id)a1 invitedHandle:(id)a2 statusTypeIdentifier:(id)a3 dateInvitationCreated:(id)a4 incomingRatchetState:(id)a5 invitationPayload:(id)a6;
- (id)initWithCoreDataReceivedInvitation:(id)a0;

@end
