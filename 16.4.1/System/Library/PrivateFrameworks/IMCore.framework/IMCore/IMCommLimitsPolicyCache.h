@class NSMutableDictionary;

@interface IMCommLimitsPolicyCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *conversationContextToParticipantIDsHash;
@property (retain, nonatomic) NSMutableDictionary *participantIDsHashToConversationContext;
@property (retain, nonatomic) NSMutableDictionary *participantIDsHashToChatIdentifier;
@property (retain, nonatomic) NSMutableDictionary *chatIdentifierToParticipantIDsHash;

- (id)init;
- (void).cxx_destruct;
- (id)conversationContextForChat:(id)a0;
- (void)addSentinelContextForParticipantIDsHash:(id)a0;
- (void)addTrackingForChat:(id)a0 participantIDsHash:(id)a1;
- (void)addTrackingForConversationContext:(id)a0 forParticipantIDsHash:(id)a1;
- (id)chatForConversationContext:(id)a0;
- (id)chatForParticipantIDsHash:(id)a0;
- (id)contextForParticipantIDsHash:(id)a0;
- (BOOL)isFetchingCommLimitsPolicyForChat:(id)a0;
- (void)removeTrackingForChat:(id)a0;

@end
