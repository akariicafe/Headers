@class NSString, NSData, NSDate, Channel;

@interface InvitedUser : NSManagedObject

@property (class, readonly, nonatomic) NSString *invitedHandleKeyPath;
@property (class, readonly, nonatomic) NSString *senderHandleKeyPath;

@property (copy, nonatomic) NSDate *dateInvitationPayloadCreated;
@property (retain, nonatomic) NSData *invitationPayload;
@property (copy, nonatomic) NSString *invitedHandle;
@property (copy, nonatomic) NSString *senderHandle;
@property (retain, nonatomic) Channel *channel;

+ (id)fetchRequest;
+ (id)predicateForSenderHandle:(id)a0;
+ (id)predicateForInvitedHandle:(id)a0;
+ (id)predicateForChannel:(id)a0;
+ (id)channelKeyPath;

@end
