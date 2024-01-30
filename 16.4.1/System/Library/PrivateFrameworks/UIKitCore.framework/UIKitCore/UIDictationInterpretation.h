@class NSArray;

@interface UIDictationInterpretation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double averageConfidenceScore;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) BOOL removeSpaceBefore;
@property (readonly, nonatomic) BOOL removeSpaceAfter;

+ (id)serializedInterpretationFromTokens:(id)a0 transform:(const struct __CFString { } *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTokens:(id)a0;
- (id)initWithTokens:(id)a0 score:(double)a1;
- (id)serializedInterpretationWithTransform:(const struct __CFString { } *)a0;

@end
