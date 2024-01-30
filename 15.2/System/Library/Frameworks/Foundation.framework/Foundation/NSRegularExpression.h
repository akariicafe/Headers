@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSSecureCoding> {
    NSString *_pattern;
    unsigned long long _options;
    void *_internal;
    id _reserved1;
    int _checkout;
    int _reserved2;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *pattern;
@property (readonly) unsigned long long options;
@property (readonly) unsigned long long numberOfCaptureGroups;

+ (void)initialize;
+ (id)regularExpressionWithPattern:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)escapedPatternForString:(id)a0;
+ (id)escapedTemplateForString:(id)a0;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFirstMatchInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)stringByReplacingMatchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 withTemplate:(id)a3;
- (id)replacementStringForResult:(id)a0 inString:(id)a1 offset:(long long)a2 template:(id)a3;
- (unsigned long long)replaceMatchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 withTemplate:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)numberOfMatchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)firstMatchInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)description;
- (id)matchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (unsigned long long)_captureGroupNumberWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateMatchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 usingBlock:(id /* block */)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithPattern:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
