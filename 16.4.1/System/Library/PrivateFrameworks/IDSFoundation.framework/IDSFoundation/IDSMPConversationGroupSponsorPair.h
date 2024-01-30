@class NSString, IDSMPConversationKey;

@interface IDSMPConversationGroupSponsorPair : NSObject

@property (readonly, nonatomic) IDSMPConversationKey *conversationKey;
@property (readonly, nonatomic) NSString *sponsorAlias;

- (void).cxx_destruct;
- (id)initWithConversationKey:(id)a0 sponsorAlias:(id)a1;

@end
