@class NSString, NSSet, NSData, NSDate;

@interface Channel : NSManagedObject

@property (class, readonly, nonatomic) NSString *identifierKeyPath;
@property (class, readonly, nonatomic) NSString *personalKeyPath;
@property (class, readonly, nonatomic) NSString *decomissionedKeyPath;
@property (class, readonly, nonatomic) NSString *statusTypeKeyPath;
@property (class, readonly, nonatomic) NSString *encryptionKeysKeyPath;

@property (retain, nonatomic) NSData *channelToken;
@property (retain, nonatomic) NSData *currentOutgoingRatchetState;
@property (copy, nonatomic) NSDate *dateChannelCreated;
@property (nonatomic) BOOL decomissioned;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL personal;
@property (copy, nonatomic) NSString *statusType;
@property (retain, nonatomic) NSSet *generatedEncryptionKeys;
@property (retain, nonatomic) NSSet *invitedUsers;
@property (retain, nonatomic) NSSet *receivedInvitations;

+ (id)sortDescriptorForPersonalOrderedAscending:(BOOL)a0;
+ (id)fetchRequest;
+ (id)predicateForChannelIdentifier:(id)a0;
+ (id)predicateForPersonal:(BOOL)a0;
+ (id)dateChannelCreatedKeyPath;
+ (id)predicateForDecomissioned:(BOOL)a0;
+ (id)predicateForStatusTypeIdentifier:(id)a0;
+ (id)predicateForCreationDateNotNil;
+ (id)sortDescriptorForChannelIdentifierOrderedAscending:(BOOL)a0;
+ (id)sortDescriptorForStatusTypeIdentifierOrderedAscending:(BOOL)a0;
+ (id)sortDescriptorForCreationDateAscending:(BOOL)a0;

@end
