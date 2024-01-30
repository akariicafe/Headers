@class NSString;

@interface NUPixelFormat : NSObject

@property (readonly, nonatomic) long long bytesPerPixel;
@property (readonly, nonatomic) int CIFormat;
@property (readonly, nonatomic) unsigned int CVPixelFormat;
@property (readonly, nonatomic) BOOL supportsExtendedRange;
@property (readonly, nonatomic) NSString *name;

+ (id)I8;
+ (id)A16;
+ (id)RG16;
+ (id)ARGB8;
+ (id)BGRA8;
+ (id)RGBA8;
+ (id)RGBAf;
+ (id)RGBAh;
+ (id)sRGBA8;
+ (id)RGBA16;
+ (id)A2RGB10;
+ (id)XRSRGB10;
+ (id)pixelFormatForCIFormat:(int)a0;
+ (id)pixelFormatForCVPixelFormat:(unsigned int)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)alignedRowBytesForWidth:(long long)a0;
- (BOOL)isEqualToPixelFormat:(id)a0;

@end
