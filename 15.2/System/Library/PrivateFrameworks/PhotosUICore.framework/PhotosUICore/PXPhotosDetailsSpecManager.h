@class PXPhotosDetailsSpec;

@interface PXPhotosDetailsSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXPhotosDetailsSpec *spec;
@property (readonly, nonatomic) unsigned long long detailsOptions;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 detailsOptions:(unsigned long long)a2;
- (id)initWithExtendedTraitCollection:(id)a0 detailsOptions:(unsigned long long)a1;

@end
