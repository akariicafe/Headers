@class NSDictionary, NSArray;

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation

@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (copy, nonatomic) NSArray *searchTypes;

+ (id)startVoiceSearchRequest;
+ (id)startVoiceSearchRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
