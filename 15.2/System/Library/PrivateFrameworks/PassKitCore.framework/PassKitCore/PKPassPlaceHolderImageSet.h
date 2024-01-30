@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *placeHolderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } logoRect;

+ (unsigned int)currentVersion;
+ (BOOL)supportsSecureCoding;
+ (long long)imageSetType;
+ (id)archiveName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (id)_initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3 frontFaceImageSet:(id)a4;

@end
