@class NSArray, NSData, NSString;

@interface SARDServerContextUpdateCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *mappedDomainEntities;
@property (copy, nonatomic) NSData *nlContextUpdatePayload;
@property (copy, nonatomic) NSString *resultCandidateId;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
