@class NSArray, PXCuratedLibraryLayoutSpec;

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;

- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (id)createSpec;
- (void).cxx_destruct;
- (Class)specClass;

@end
