@class NSUUID, NSSet, NSString, NSDate, TUConversationLinkOriginator, NSData;

@interface TUMutableConversationLinkDescriptor : TUConversationLinkDescriptor

@property (nonatomic, getter=isActivated) BOOL activated;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *deletionDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (copy, nonatomic) NSSet *invitedHandles;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TUConversationLinkOriginator *originator;
@property (copy, nonatomic) NSData *privateKey;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) int version;
@property (nonatomic) long long linkLifetimeScope;


@end
