@class NSString;

@interface SAStartStructuredDictationRequest : SAStartRequest

@property (copy, nonatomic) NSString *structuredDictationType;

+ (id)startStructuredDictationRequest;
+ (id)startStructuredDictationRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
