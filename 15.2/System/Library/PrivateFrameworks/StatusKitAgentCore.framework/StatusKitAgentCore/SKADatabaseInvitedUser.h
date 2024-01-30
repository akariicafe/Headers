@class NSString, SKInvitationPayload, NSData, SKHandle, NSDate;

@interface SKADatabaseInvitedUser : NSObject

@property (readonly, nonatomic) SKHandle *invitedSKHandle;
@property (readonly, nonatomic) SKHandle *senderSKHandle;
@property (readonly, nonatomic) SKInvitationPayload *invitationPayload;
@property (readonly, nonatomic) NSString *invitedHandle;
@property (readonly, nonatomic) NSString *senderHandle;
@property (readonly, nonatomic) NSData *invitationPayloadData;
@property (readonly, nonatomic) NSDate *dateInvitationPayloadCreated;

- (void).cxx_destruct;
- (id)initWithCoreDataInvitedUser:(id)a0;
- (id)initWithInvitedHandle:(id)a0 senderHande:(id)a1 invitationPayloadData:(id)a2 dateInvitationPayloadCreated:(id)a3;

@end
