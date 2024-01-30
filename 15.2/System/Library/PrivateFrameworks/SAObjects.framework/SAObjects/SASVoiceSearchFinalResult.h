@class NSString, NSArray;

@interface SASVoiceSearchFinalResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *recognitionText;
@property (copy, nonatomic) NSArray *voiceSearchResults;

+ (id)voiceSearchFinalResult;
+ (id)voiceSearchFinalResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
