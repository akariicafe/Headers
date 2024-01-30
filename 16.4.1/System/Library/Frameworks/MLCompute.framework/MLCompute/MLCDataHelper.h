@interface MLCDataHelper : NSObject

+ (id)createDataWithFloatValue:(float)a0 count:(unsigned long long)a1;
+ (BOOL)convertFp16toFp32:(unsigned long long)a0 fp16Values:(const void /* unknown type, blank encoding */ *)a1 fp32Values:(float *)a2;
+ (BOOL)convertFp32toFp16:(unsigned long long)a0 fp32Values:(const float *)a1 fp16Values:(void /* unknown type, blank encoding */ *)a2;
+ (BOOL)convertOIHWtoIOHW:(id)a0 sourceOIHW:(const void *)a1 resultIOHW:(void *)a2 inputFeatureChannelCount:(unsigned long long)a3 outputFeatureChannelCount:(unsigned long long)a4;
+ (BOOL)convertSourceHWIO:(const void *)a0 toResultOIHW:(void *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 inputFeatureChannelCount:(unsigned long long)a4 outputFeatureChannelCount:(unsigned long long)a5 dataType:(int)a6;
+ (BOOL)convertSourceHWOI:(const void *)a0 toResultOIHW:(void *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 inputFeatureChannelCount:(unsigned long long)a4 outputFeatureChannelCount:(unsigned long long)a5 dataType:(int)a6;
+ (BOOL)convertSourceOIHW:(const void *)a0 toResultHWIO:(void *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 inputFeatureChannelCount:(unsigned long long)a4 outputFeatureChannelCount:(unsigned long long)a5 dataType:(int)a6;
+ (BOOL)convertSourceOIHW:(const void *)a0 toResultHWOI:(void *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 inputFeatureChannelCount:(unsigned long long)a4 outputFeatureChannelCount:(unsigned long long)a5 dataType:(int)a6;
+ (void)copySource:(const void *)a0 toTarget:(void *)a1 sourceOffset:(unsigned long long)a2 targetOffset:(unsigned long long)a3 sizeToCopy:(unsigned long long)a4;
+ (void)fillData:(id)a0 withFloatValue:(float)a1;

@end
