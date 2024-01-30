@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *placeHolderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } logoRect;

+ (long long)imageSetType;
+ (BOOL)supportsSecureCoding;
+ (id)archiveName;
+ (unsigned int)currentVersion;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (id)_initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3 frontFaceImageSet:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
