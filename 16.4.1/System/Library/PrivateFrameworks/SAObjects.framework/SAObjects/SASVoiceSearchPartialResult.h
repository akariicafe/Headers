@class NSString, NSArray;

@interface SASVoiceSearchPartialResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *recognitionText;
@property (nonatomic) BOOL stable;
@property (copy, nonatomic) NSArray *voiceSearchResults;

+ (id)voiceSearchPartialResult;
+ (id)voiceSearchPartialResultWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
