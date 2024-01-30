@class NSRegularExpression, NSArray;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSRegularExpression *regularExpression;
@property (readonly) NSArray *rangeArray;

+ (BOOL)supportsSecureCoding;

- (id)initWithRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1 regularExpression:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRangeArray:(id)a0 regularExpression:(id)a1;
- (unsigned long long)resultType;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithName:(id)a0;
- (id)description;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (id)initWithCoder:(id)a0;

@end
