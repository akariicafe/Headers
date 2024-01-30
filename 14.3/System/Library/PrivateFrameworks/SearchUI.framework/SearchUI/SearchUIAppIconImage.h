@class NSString;

@interface SearchUIAppIconImage : SearchUIImage

@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSString *bundleIdentifier;

+ (id)appIconForImage:(id)a0 variant:(unsigned long long)a1;
+ (id)appIconForBundleIdentifier:(id)a0 variant:(unsigned long long)a1;
+ (id)descriptorNameForVariant:(unsigned long long)a0;
+ (int)iconFormatForVariant:(unsigned long long)a0;
+ (unsigned long long)bestVariantForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)appIconForResult:(id)a0 variant:(unsigned long long)a1;
+ (double)cornerRadiusForVariant:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })sizeForVariant:(unsigned long long)a0;

- (id)loadImage;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateAppIcon;
- (void)appIconWillChange:(id)a0;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;
- (id)generateImageWithFormat:(int)a0;
- (BOOL)isEqual:(id)a0;
- (int)defaultCornerRoundingStyle;
- (id)initWithBundleIdentifier:(id)a0 variant:(unsigned long long)a1;
- (BOOL)needsTinting;

@end
