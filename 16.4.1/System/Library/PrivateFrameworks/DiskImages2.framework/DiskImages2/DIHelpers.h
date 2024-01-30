@interface DIHelpers : NSObject

+ (unsigned long long)numBlocksWithSizeStr:(id)a0 blockSize:(unsigned long long)a1;
+ (id)copyDevicePathWithStatfs:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
+ (BOOL)executeWithPath:(id)a0 arguments:(id)a1 error:(id *)a2;
+ (id)stringWithImageFormat:(long long)a0;

@end
