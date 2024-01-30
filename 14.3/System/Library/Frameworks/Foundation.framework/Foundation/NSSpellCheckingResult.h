@interface NSSpellCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

+ (BOOL)supportsSecureCoding;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)a0;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)encodeWithCoder:(id)a0;

@end
