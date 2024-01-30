@class NSArray, PXCuratedLibraryLayoutSpec;

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;

- (Class)specClass;
- (void).cxx_destruct;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (id)createSpec;

@end
