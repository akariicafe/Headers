@interface _NSPredicateOperatorUtilities : NSObject

+ (long long)copyRegexFindSafePattern:(id)a0 toBuffer:(unsigned short *)a1;
+ (id)newStringFrom:(id)a0 usingUnicodeTransforms:(unsigned long long)a1;
+ (struct __CFLocale { } *)retainedLocale;
+ (BOOL)doRegexForString:(id)a0 pattern:(id)a1 likeProtect:(BOOL)a2 flags:(unsigned long long)a3 context:(struct { id x0; void *x1; long long x2; } *)a4;

@end
