@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double confidenceScore;

- (id)initWithCoder:(id)a0;
- (id)_descriptionExtra;
- (id)initWithText:(id)a0 removeSpaceBefore:(BOOL)a1 removeSpaceAfter:(BOOL)a2 confidenceScore:(double)a3;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
