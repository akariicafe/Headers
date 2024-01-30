@class NSString;

@interface TUConversationParticipantAssociation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSString *avcIdentifier;

+ (id)avcIdentifierFromURLComponents:(id)a0 namePrefix:(id)a1;
+ (id)identifierFromURLComponents:(id)a0 namePrefix:(id)a1;
+ (id)participantAssociationFromURLComponents:(id)a0 namePrefix:(id)a1;
+ (id)queryItemName:(id)a0 prefix:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithParticipantAssociation:(id)a0;
- (id)avcIdentifierQueryItemWithNamePrefix:(id)a0;
- (id)identifierQueryItemWithNamePrefix:(id)a0;
- (BOOL)isEqualToParticipantAssociation:(id)a0;
- (id)queryItemsWithNamePrefix:(id)a0;

@end
