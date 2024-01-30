@class NSString;

@interface SASAbortSpeechRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *reason;

+ (id)abortSpeechRequest;
+ (id)abortSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
