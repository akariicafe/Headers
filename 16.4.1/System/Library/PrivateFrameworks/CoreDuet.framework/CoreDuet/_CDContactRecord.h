@class NSString, NSSet, NSURL, _CDContact;

@interface _CDContactRecord : NSManagedObject

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) int displayType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *customIdentifier;
@property (retain, nonatomic) NSString *personId;
@property (nonatomic) int personIdType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSSet *interactionRecipient;
@property (retain, nonatomic) NSSet *interactionSender;
@property (retain, nonatomic) NSURL *displayImageURL;
@property (nonatomic) int incomingRecipientCount;
@property (nonatomic) int outgoingRecipientCount;
@property (nonatomic) int incomingSenderCount;
@property (nonatomic) double firstIncomingRecipientDate;
@property (nonatomic) double firstOutgoingRecipientDate;
@property (nonatomic) double firstIncomingSenderDate;
@property (nonatomic) double lastIncomingRecipientDate;
@property (nonatomic) double lastOutgoingRecipientDate;
@property (nonatomic) double lastIncomingSenderDate;
@property (retain) _CDContact *contact;

- (void).cxx_destruct;

@end
