@class NSArray, NSData, NSString;

@interface SARDServerContextUpdateCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *mappedDomainEntities;
@property (copy, nonatomic) NSData *nlContextUpdatePayload;
@property (copy, nonatomic) NSData *pegasusConversationContext;
@property (copy, nonatomic) NSString *resultCandidateId;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
