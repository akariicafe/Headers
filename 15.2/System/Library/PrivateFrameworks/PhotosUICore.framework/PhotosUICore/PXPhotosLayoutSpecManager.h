@class NSArray, PXPhotosLayoutSpec;

@interface PXPhotosLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXPhotosLayoutSpec *spec;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;
@property (readonly, nonatomic) BOOL sectionHeadersEnabled;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (id)createSpec;
- (void).cxx_destruct;
- (Class)specClass;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 enableSectionHeaders:(BOOL)a2;

@end
