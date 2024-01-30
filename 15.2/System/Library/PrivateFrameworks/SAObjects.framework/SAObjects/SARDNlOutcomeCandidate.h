@class NSData, NSString;

@interface SARDNlOutcomeCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *nlIntentHierarchyContainerProto;
@property (copy, nonatomic) NSString *resultCandidateId;

+ (id)nlOutcomeCandidate;
+ (id)nlOutcomeCandidateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
