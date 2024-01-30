@class NSSet, PGManager, NSMutableDictionary;

@interface PGMessageProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PGManager *manager;
@property (readonly, nonatomic) NSSet *personalChatIdentifiers;
@property (readonly, nonatomic) NSSet *groupChatIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *cnIdentifiersByChatIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *personalChatIdentifierByContactIdentifier;
@property (retain, nonatomic) NSMutableDictionary *numberOfMessagesPerChatIdentifier;
@property (retain, nonatomic) NSMutableDictionary *addressMentionsByContactIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *numberOfLoveEmojisByPersonLocalIdentifier;

+ (id)persistedMessageProfileWithManager:(id)a0;

- (id)_dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupChatIdentifiers:(id)a0 personalChatIdentifiers:(id)a1 personsByChatIdentifier:(id)a2 manager:(id)a3;
- (void)enumeratePersonLocalIdentifiersExchangingLoveEmojisWithProgressBlock:(id /* block */)a0 usingBlock:(id /* block */)a1;
- (void)enumerateMessageGroupsWithProgressBlock:(id /* block */)a0 usingBlock:(id /* block */)a1;
- (void)enumerateContactIdentifiersAndMentionedAddressesUsingBlock:(id /* block */)a0;
- (id)numberOfMessagesByContactIdentifier;
- (unsigned long long)numberOfMessageGroupChats;
- (void)registerMessageForChatIdentifier:(id)a0;
- (void)registerLoveEmoji:(unsigned long long)a0 forPersonLocalIdentifier:(id)a1;
- (void)registerMentionedLocation:(id)a0 contactIdentifier:(id)a1 onDate:(id)a2;
- (BOOL)persistOnDisk;

@end
