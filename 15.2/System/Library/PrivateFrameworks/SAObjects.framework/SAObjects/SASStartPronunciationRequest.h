@class SASPronunciationContext;

@interface SASStartPronunciationRequest : SASStartSpeech

@property (retain, nonatomic) SASPronunciationContext *context;

+ (id)startPronunciationRequest;
+ (id)startPronunciationRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
