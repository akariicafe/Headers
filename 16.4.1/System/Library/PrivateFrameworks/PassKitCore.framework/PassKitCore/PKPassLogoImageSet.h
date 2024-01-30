@class PKImage;

@interface PKPassLogoImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *logoImage;
@property (retain, nonatomic) PKImage *backgroundImage;
@property (retain, nonatomic) PKImage *thumbnailImage;
@property (retain, nonatomic) PKImage *stripImage;
@property (retain, nonatomic) PKImage *footerImage;
@property (retain, nonatomic) PKImage *altImage;
@property (retain, nonatomic) PKImage *bankLogoImage;
@property (retain, nonatomic) PKImage *networkLogoImage;
@property (retain, nonatomic) PKImage *cobrandLogoImage;
@property (retain, nonatomic) PKImage *cardBackgroundImage;
@property (retain, nonatomic) PKImage *cardBackgroundCombinedImage;
@property (retain, nonatomic) PKImage *compactBankLogoDarkImage;
@property (retain, nonatomic) PKImage *compactBankLogoLightImage;

+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldCache;
+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (long long)imageSetType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)preheatImages;

@end
