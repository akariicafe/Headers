@interface CLSImageUtils : CLSObject

+ (id)JPEGDataFromCGImage:(struct CGImage { } *)a0 error:(id *)a1;
+ (struct CGImage { } *)CGImageFromJPEGData:(id)a0 error:(id *)a1;
+ (id)JPEGDataFromCGImage:(struct CGImage { } *)a0 desiredMinimumDimension:(unsigned long long)a1 desiredMaximumDimension:(unsigned long long)a2 error:(id *)a3;

@end
