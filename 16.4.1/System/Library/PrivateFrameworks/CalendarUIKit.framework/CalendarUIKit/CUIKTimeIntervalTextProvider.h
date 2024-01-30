@interface CUIKTimeIntervalTextProvider : NSObject

+ (id)_stringByRemovingDesignatorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromString:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfDesignatorInAnnotatedTime:(id)a0;
+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 font:(struct __CTFont { } *)a3 designatorRequiresWhitespace:(BOOL)a4 smallCapsAllowed:(BOOL)a5 dropLeftRedundantDesignator:(BOOL)a6;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfAnnontatedTime:(id)a0 matchingPattern:(id /* block */)a1;
+ (id)timeIntervalAttributedTextWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 font:(struct __CTFont { } *)a3;

@end
