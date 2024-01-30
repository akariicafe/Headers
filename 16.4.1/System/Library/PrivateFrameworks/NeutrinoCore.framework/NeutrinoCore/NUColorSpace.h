@class NSString, NSDictionary;

@interface NUColorSpace : NSObject

@property (readonly, nonatomic) struct CGColorSpace { } *CGColorSpace;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *descriptionName;
@property (readonly, nonatomic) NSDictionary *cvPixelBufferAttachments;

+ (id)workingColorSpace;
+ (id)colorSpaceFromColorPrimaries:(id)a0 transferFunction:(id)a1 yccMatrix:(id)a2;
+ (id)colorSpaceFromVideoColorProperties:(id)a0;
+ (id)displayP3ColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)itur2100HLGColorSpace;
+ (id)linearGrayColorSpace;
+ (id)rec709ColorSpace;
+ (id)sRGBColorSpace;
+ (id)sRGBLinearColorSpace;
+ (id)_loadICCProfileDataWithIdentifier:(id)a0;
+ (id)adobeRGBColorSpace;
+ (id)displayP3LinearColorSpace;
+ (id)extendedSRGBLinearColorSpace;
+ (id)genericGrayColorSpace;
+ (id)genericGrayGamma2_2ColorSpace;
+ (id)genericRGBColorSpace;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isHDR;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)applyAttachmentsToCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0;
- (void)nu_updateDigest:(id)a0;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0 descriptionName:(id)a1;
- (id)initWithICCProfileData:(id)a0 descriptionName:(id)a1;
- (BOOL)isWideGamut;

@end
