@class PKImage;

@interface PKPassLogoImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *logoImage;
@property (retain, nonatomic) PKImage *backgroundImage;
@property (retain, nonatomic) PKImage *thumbnailImage;
@property (retain, nonatomic) PKImage *stripImage;
@property (retain, nonatomic) PKImage *footerImage;
@property (retain, nonatomic) PKImage *bankLogoImage;
@property (retain, nonatomic) PKImage *networkLogoImage;
@property (retain, nonatomic) PKImage *cobrandLogoImage;
@property (retain, nonatomic) PKImage *cardBackgroundImage;
@property (retain, nonatomic) PKImage *cardBackgroundCombinedImage;
@property (retain, nonatomic) PKImage *compactBankLogoDarkImage;
@property (retain, nonatomic) PKImage *compactBankLogoLightImage;

+ (long long)imageSetType;
+ (BOOL)supportsSecureCoding;
+ (id)archiveName;
+ (BOOL)shouldCache;
+ (unsigned int)currentVersion;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
