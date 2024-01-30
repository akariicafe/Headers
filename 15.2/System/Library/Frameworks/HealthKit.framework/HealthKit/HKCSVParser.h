@interface HKCSVParser : NSObject

+ (id)commaCharacterSet;
+ (id)quoteCharacterSet;
+ (id)terminatingCharacterSet;
+ (BOOL)newlineWithScanner:(id)a0;
+ (id)fieldWithScanner:(id)a0 error:(out id *)a1;
+ (id)recordWithScanner:(id)a0 error:(out id *)a1;
+ (id)parseCSV:(id)a0 error:(out id *)a1;
+ (id)newlineCharacterSet;

@end
