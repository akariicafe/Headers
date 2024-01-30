@class NSRegularExpression;

@interface TSCERegexMatcher : NSObject

@property (readonly, nonatomic) NSRegularExpression *regularExpression;

+ (id)regexMatcherWithRegexString:(id)a0;
+ (id)regexMatcherWithRegexString:(id)a0 caseSensitive:(BOOL)a1;
+ (id)regexMatcherWithRegexString:(id)a0 caseSensitive:(BOOL)a1 entireMatch:(BOOL)a2;
+ (id)regexMatcherWithStringMatch:(id)a0;
+ (id)regexMatcherWithStringMatch:(id)a0 caseSensitive:(BOOL)a1 entireMatch:(BOOL)a2;

- (void).cxx_destruct;
- (id)matchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (unsigned long long)numberOfMatchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFirstMatchInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)stringByReplacingMatchesInString:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 withTemplate:(id)a3;
- (BOOL)containsMatchInString:(id)a0;
- (id)initWithRegexString:(id)a0 caseSensitive:(BOOL)a1 entireMatch:(BOOL)a2;
- (id)initWithString:(id)a0 caseSensitive:(BOOL)a1 entireMatch:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFirstMatchInString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfMatchInString:(id)a0 occurrence:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfMatchInString:(id)a0 occurrence:(long long)a1 matchesFound:(out long long *)a2;

@end
