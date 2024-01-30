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
+ (id)sRGBLinearColorSpace;
+ (id)adobeRGBColorSpace;
+ (id)genericRGBColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)genericGrayColorSpace;
+ (id)displayP3LinearColorSpace;
+ (id)linearWideGamutColorSpace;
+ (struct CGColorSpace { } *)_newLinearWideGamutColorSpace;
+ (id)colorSpaceFromVideoColorProperties:(id)a0;
+ (id)colorSpaceFromColorPrimaries:(id)a0 transferFunction:(id)a1 yccMatrix:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isHDR;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)nu_updateDigest:(id)a0;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0;
- (id)initWithCGColorSpace:(struct CGColorSpace { } *)a0 descriptionName:(id)a1;
- (id)initWithICCProfileData:(id)a0 descriptionName:(id)a1;
- (BOOL)isWideGamut;
- (void)applyAttachmentsToCVPixelBuffer:(struct __CVBuffer { } *)a0;

@end
