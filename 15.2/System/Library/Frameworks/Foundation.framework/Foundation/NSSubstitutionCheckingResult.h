@class NSString;

@interface NSSubstitutionCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_replacementString;
}

+ (BOOL)supportsSecureCoding;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
- (id)description;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (id)replacementString;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:(long long)a0;

@end
