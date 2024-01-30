@class NSDictionary;

@interface SiriTestingContext : SiriContext

@property (readonly, nonatomic) NSDictionary *testingContext;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)containsRecognitionStrings;
- (BOOL)containsAudioInput;
- (id)initWithPPTContext:(id)a0 siriContextOverride:(id)a1;
- (id)initWithRecognitionStrings:(id)a0 siriContextOverride:(id)a1;
- (id)initWithAudioInput:(id)a0 siriContextOverride:(id)a1;
- (id)initWithPPTContext:(id)a0;
- (id)initWithRecognitionStrings:(id)a0;
- (id)initWithAudioInput:(id)a0;

@end
