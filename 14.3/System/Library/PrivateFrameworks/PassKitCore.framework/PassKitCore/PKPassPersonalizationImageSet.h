@class PKImage;

@interface PKPassPersonalizationImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *logoImage;

+ (long long)imageSetType;
+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldCache;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
