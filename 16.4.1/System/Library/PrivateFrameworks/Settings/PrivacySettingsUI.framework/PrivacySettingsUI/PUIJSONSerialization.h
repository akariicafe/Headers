@interface PUIJSONSerialization : NSJSONSerialization

+ (id)dataWithJSONObject:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)dateToString:(id)a0;
+ (id)recursivelyReplaceNSDateWithNSString:(id)a0;

@end
