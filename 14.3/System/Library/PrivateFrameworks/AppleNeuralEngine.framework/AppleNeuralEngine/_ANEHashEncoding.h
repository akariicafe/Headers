@interface _ANEHashEncoding : NSObject

+ (id)hexStringFor:(id)a0;
+ (void)copySHA256For:(id)a0 toBuffer:(char *)a1;
+ (unsigned int)hashFor:(id)a0 seed:(unsigned int)a1;

@end
