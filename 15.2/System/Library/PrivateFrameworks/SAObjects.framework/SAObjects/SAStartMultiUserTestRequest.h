@class NSString, SAConfidenceScores;

@interface SAStartMultiUserTestRequest : SAStartRequest

@property (copy, nonatomic) NSString *expectedSelectedSharedUserId;
@property (retain, nonatomic) SAConfidenceScores *voiceIDConfidenceScores;

+ (id)startMultiUserTestRequest;
+ (id)startMultiUserTestRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
