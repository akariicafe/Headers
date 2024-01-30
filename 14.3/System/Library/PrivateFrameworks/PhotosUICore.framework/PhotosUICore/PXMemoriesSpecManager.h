@class PXMemoriesSpec;

@interface PXMemoriesSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) PXMemoriesSpec *spec;

- (Class)specClass;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 style:(unsigned long long)a2;

@end
