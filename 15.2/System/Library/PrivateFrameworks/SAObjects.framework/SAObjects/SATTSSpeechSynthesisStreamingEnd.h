@class NSString;

@interface SATTSSpeechSynthesisStreamingEnd : SATTSSpeechSynthesisStreaming

@property (nonatomic) long long count;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;

+ (id)speechSynthesisStreamingEnd;
+ (id)speechSynthesisStreamingEndWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
