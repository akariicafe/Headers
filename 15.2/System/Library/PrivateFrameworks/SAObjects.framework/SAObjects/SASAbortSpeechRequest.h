@class NSString;

@interface SASAbortSpeechRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *reason;

+ (id)abortSpeechRequest;
+ (id)abortSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
