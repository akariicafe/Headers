@class NSString;

@interface SearchUIAppIconImage : SearchUIImage

@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSString *bundleIdentifier;

+ (id)appIconForBundleIdentifier:(id)a0 variant:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })sizeForVariant:(unsigned long long)a0;
+ (id)appIconForImage:(id)a0 variant:(unsigned long long)a1;
+ (id)descriptorNameForVariant:(unsigned long long)a0;
+ (int)iconFormatForVariant:(unsigned long long)a0;
+ (unsigned long long)bestVariantForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)appIconForResult:(id)a0 variant:(unsigned long long)a1;

- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)uniqueIdentifier;
- (int)defaultCornerRoundingStyle;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)a0 variant:(unsigned long long)a1;
- (void)appIconWillChange:(id)a0;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;
- (void)invalidateAppIcon;
- (id)generateImageWithFormat:(int)a0 scale:(double)a1;
- (BOOL)needsTinting;

@end
