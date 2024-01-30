@class NSString, NSData, NSDate, Channel;

@interface ReceivedInvitation : NSManagedObject

@property (class, readonly, nonatomic) NSString *dateInvitationCreatedKeyPath;

@property (copy, nonatomic) NSDate *dateInvitationCreated;
@property (retain, nonatomic) NSData *incomingRatchetState;
@property (copy, nonatomic) NSString *invitationIdentifier;
@property (retain, nonatomic) NSData *invitationPayload;
@property (copy, nonatomic) NSString *invitedHandle;
@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *statusTypeIdentifier;
@property (retain, nonatomic) Channel *channel;

+ (id)fetchRequest;
+ (id)predicateForStatusTypeIdentifier:(id)a0;
+ (id)statusTypeIdentifierKeyPath;
+ (id)senderHandleKeyPath;
+ (id)predicateForSenderHandleString:(id)a0;
+ (id)predicateForSenderHandle:(id)a0;
+ (id)sortDescriptorForDateInvitationCreatedOrderedAscending:(BOOL)a0;
+ (id)sortDescriptorForSenderHandleOrderedAscending:(BOOL)a0;

@end
