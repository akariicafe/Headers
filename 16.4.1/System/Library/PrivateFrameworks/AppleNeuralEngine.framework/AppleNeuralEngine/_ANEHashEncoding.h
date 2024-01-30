@interface _ANEHashEncoding : NSObject

+ (id)hexStringForData:(id)a0;
+ (id)convertToHexString:(char *)a0 length:(unsigned long long)a1;
+ (void)copySHA256For:(id)a0 toBuffer:(char *)a1;
+ (unsigned int)hashForString:(id)a0 seed:(unsigned int)a1;
+ (id)hexStringForBytes:(char *)a0 length:(unsigned long long)a1;
+ (id)hexStringForDataArray:(id)a0;
+ (id)hexStringForString:(id)a0;

@end
