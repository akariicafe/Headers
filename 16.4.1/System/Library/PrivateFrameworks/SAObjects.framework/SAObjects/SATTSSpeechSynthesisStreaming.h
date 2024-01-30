@class NSString;

@interface SATTSSpeechSynthesisStreaming : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *streamId;

+ (id)speechSynthesisStreaming;
+ (id)speechSynthesisStreamingWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
