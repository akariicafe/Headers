@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double confidenceScore;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_descriptionExtra;
- (id)initWithText:(id)a0 removeSpaceBefore:(BOOL)a1 removeSpaceAfter:(BOOL)a2 confidenceScore:(double)a3;

@end
