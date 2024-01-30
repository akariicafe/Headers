@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSArray *_details;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)resultType;
- (void)encodeWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithCoder:(id)a0;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (void)dealloc;
- (id)grammarDetails;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 details:(id)a1;

@end
