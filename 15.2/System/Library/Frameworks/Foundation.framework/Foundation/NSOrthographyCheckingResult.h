@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSOrthography *_orthography;
}

+ (BOOL)supportsSecureCoding;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)encodeWithCoder:(id)a0;
- (id)orthography;
- (unsigned long long)resultType;
- (id)description;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 orthography:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:(long long)a0;

@end
