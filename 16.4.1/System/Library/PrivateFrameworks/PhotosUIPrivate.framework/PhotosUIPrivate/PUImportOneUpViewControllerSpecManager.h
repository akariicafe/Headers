@class PUImportOneUpViewControllerSpec;

@interface PUImportOneUpViewControllerSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PUImportOneUpViewControllerSpec *spec;
@property (readonly, nonatomic) unsigned long long style;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (Class)specClass;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 style:(unsigned long long)a2;

@end
