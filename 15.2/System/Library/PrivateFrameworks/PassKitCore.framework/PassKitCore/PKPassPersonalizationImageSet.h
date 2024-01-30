@class PKImage;

@interface PKPassPersonalizationImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *logoImage;

+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldCache;
+ (long long)imageSetType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;

@end
