@interface TXRPixelFormatInfo : NSObject

+ (BOOL)isFloat:(unsigned long long)a0;
+ (BOOL)isInteger:(unsigned long long)a0;
+ (BOOL)isASTC:(unsigned long long)a0;
+ (BOOL)isETC2:(unsigned long long)a0;
+ (BOOL)isCompressed:(unsigned long long)a0;
+ (BOOL)isSRGB:(unsigned long long)a0;
+ (BOOL)hasAlpha:(unsigned long long)a0;
+ (unsigned char)pixelBytes:(unsigned long long)a0;
+ (struct TXRImageMemoryLayout { unsigned long long x0; unsigned long long x1; })packedMemoryLayoutForFormat:(SEL)a0 dimensions:(unsigned long long)a1;
+ (BOOL)isGammaEncoded:(unsigned long long)a0;
+ (BOOL)isBC1to5:(unsigned long long)a0;
+ (BOOL)isBC6to7:(unsigned long long)a0;
+ (BOOL)isPVRTC:(unsigned long long)a0;
+ (unsigned char)componentsPerPixel:(unsigned long long)a0;

@end
