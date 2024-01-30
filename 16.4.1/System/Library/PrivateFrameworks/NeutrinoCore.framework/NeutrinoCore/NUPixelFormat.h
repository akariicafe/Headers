@class NSString;

@interface NUPixelFormat : NSObject

@property (class, readonly, nonatomic) NUPixelFormat *ARGB8;
@property (class, readonly, nonatomic) NUPixelFormat *BGRA8;
@property (class, readonly, nonatomic) NUPixelFormat *RGBA8;
@property (class, readonly, nonatomic) NUPixelFormat *RGBAf;
@property (class, readonly, nonatomic) NUPixelFormat *RGBAh;
@property (class, readonly, nonatomic) NUPixelFormat *R8;
@property (class, readonly, nonatomic) NUPixelFormat *RGBA16;

@property (readonly, nonatomic) long long bytesPerPixel;
@property (readonly, nonatomic) int CIFormat;
@property (readonly, nonatomic) unsigned int CVPixelFormat;
@property (readonly, nonatomic) unsigned long long metalFormat;
@property (readonly, nonatomic) BOOL supportsExtendedRange;
@property (readonly, nonatomic) NSString *name;

+ (id)R16;
+ (id)RG16;
+ (id)A2RGB10;
+ (id)pixelFormatForCIFormat:(int)a0;
+ (id)pixelFormatForCVPixelFormat:(unsigned int)a0;
+ (id)sRGB10XR;
+ (id)sRGBA8;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (long long)alignedRowBytesForWidth:(long long)a0;
- (BOOL)isEqualToPixelFormat:(id)a0;

@end
