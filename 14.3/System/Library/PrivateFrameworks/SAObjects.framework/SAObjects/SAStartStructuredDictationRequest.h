@class NSString;

@interface SAStartStructuredDictationRequest : SAStartRequest

@property (copy, nonatomic) NSString *structuredDictationType;

+ (id)startStructuredDictationRequest;
+ (id)startStructuredDictationRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
