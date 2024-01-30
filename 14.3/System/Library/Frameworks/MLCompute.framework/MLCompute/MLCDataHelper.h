@interface MLCDataHelper : NSObject

+ (id)createDataWithFloatValue:(float)a0 count:(unsigned long long)a1;
+ (void)fillData:(id)a0 withFloatValue:(float)a1;
+ (BOOL)convertFp32toFp16:(unsigned long long)a0 fp32Values:(float *)a1 fp16Values:(void /* unknown type, blank encoding */ *)a2;
+ (BOOL)convertFp16toFp32:(unsigned long long)a0 fp16Values:(void /* unknown type, blank encoding */ *)a1 fp32Values:(float *)a2;

@end
