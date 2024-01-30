@class NSString;

@interface OISFURegularExpression : NSObject <NSCopying, NSCoding> {
    NSString *_expressionString;
    void *_reserved;
}

+ (void)initialize;
+ (id)regularExpressionWithString:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)expressionString;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExpressionString:(id)a0;
- (id)initWithExpressionString:(id)a0 options:(unsigned int)a1;
- (unsigned long long)numberOfSubexpressions;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchedRangeForCString:(const char *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 subexpressionRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 count:(unsigned int)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchedRangeForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 subexpressionRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 count:(unsigned int)a3;
- (const char *)getBytesForString:(id)a0 lossByte:(unsigned char)a1;

@end
