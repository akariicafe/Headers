@class NSString, NSDictionary;

@interface NUColorSpace : NSObject

@property (readonly, nonatomic) struct CGColorSpace { } *CGColorSpace;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *descriptionName;
@property (readonly, nonatomic) NSDictionary *cvPixelBufferAttachments;

+ (id)workingColorSpace;
+ (id)itur2100HLGColorSpace;
+ (id)displayP3ColorSpace;
+ (id)rec709ColorSpace;
+ (id)_loadICCProfileDataWithIdentifier:(id)a0;
+ (id)sRGBColorSpace;
+ (id)genericGrayGamma2_2ColorSpace;
+ (id)sRGBLinearColorSpace;
+ (id)extendedSRGBLinearColorSpace;
+ (id)adobeRGBColorSpace;
+ (id)genericRGBColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)genericGrayColorSpace;
+ (id)displayP3LinearColorSpace;
+ (id)colorSpaceFromVideoColorProperties:(id)a0;
+ (id)colorSpaceFromColorPrimaries:(id)a0 transferFunction:(id)a1 yccMatrix:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isHDR;
- (unsigned long long)hash;
- (void)dealloc;
- (void)nu_updateDigest:(id)a0;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0 descriptionName:(id)a1;
- (id)initWithICCProfileData:(id)a0 descriptionName:(id)a1;
- (BOOL)isWideGamut;
- (void)applyAttachmentsToCVPixelBuffer:(struct __CVBuffer { } *)a0;

@end
