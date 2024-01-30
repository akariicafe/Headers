@class SASPronunciationContext;

@interface SASStartPronunciationRequest : SASStartSpeech

@property (retain, nonatomic) SASPronunciationContext *context;

+ (id)startPronunciationRequest;
+ (id)startPronunciationRequestWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
