@class NSString, IDSMPConversationKey;

@interface IDSMPConversationGroupSponsorPair : NSObject

@property (readonly, nonatomic) IDSMPConversationKey *conversationKey;
@property (readonly, nonatomic) NSString *sponsorAlias;

- (id)initWithConversationKey:(id)a0 sponsorAlias:(id)a1;
- (void).cxx_destruct;

@end
