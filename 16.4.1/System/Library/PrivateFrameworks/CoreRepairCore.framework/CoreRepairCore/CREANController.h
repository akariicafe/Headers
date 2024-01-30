@interface CREANController : NSObject

+ (BOOL)isEANSupported;
+ (BOOL)readFDRDataFromEANWithDataClass:(id)a0 outData:(id *)a1 stripPadding:(BOOL)a2;
+ (BOOL)_calculateDerLength:(id)a0 actual_size:(unsigned long long *)a1;
+ (id)_getDataClassesToWrite;
+ (unsigned int)_getQuerykeyFromDataClass:(struct __CFString { } *)a0;
+ (BOOL)_writeDataToEAN:(struct __CFData { } *)a0 withKey:(struct __CFString { } *)a1;
+ (BOOL)deleteFDRDataFromEANWithDataClass:(id)a0;
+ (BOOL)verifyFDRDataFromEANUsingCache:(BOOL)a0 cachedData:(id)a1;
+ (BOOL)writeFDRDataToEANWithUpdateDataClassFromDir:(id)a0;

@end
