@class NSString, NSData, NSDate, Channel;

@interface ReceivedInvitation : NSManagedObject

@property (class, readonly, nonatomic) NSString *dateInvitationCreatedKeyPath;

@property (retain, nonatomic) NSData *channelToken;
@property (copy, nonatomic) NSDate *dateInvitationCreated;
@property (retain, nonatomic) NSData *incomingRatchetState;
@property (copy, nonatomic) NSString *invitationIdentifier;
@property (retain, nonatomic) NSData *invitationPayload;
@property (copy, nonatomic) NSString *invitedHandle;
@property (retain, nonatomic) NSData *peerKey;
@property (copy, nonatomic) NSString *presenceIdentifier;
@property (copy, nonatomic) NSString *senderHandle;
@property (retain, nonatomic) NSData *serverKey;
@property (copy, nonatomic) NSString *statusTypeIdentifier;
@property (retain, nonatomic) Channel *channel;

+ (id)fetchRequest;
+ (id)predicateForSenderHandleString:(id)a0;
+ (id)predicateForSenderHandle:(id)a0;
+ (id)predicateForStatusTypeIdentifier:(id)a0;
+ (id)senderHandleKeyPath;
+ (id)sortDescriptorForDateInvitationCreatedOrderedAscending:(BOOL)a0;
+ (id)sortDescriptorForSenderHandleOrderedAscending:(BOOL)a0;
+ (id)statusTypeIdentifierKeyPath;

@end
