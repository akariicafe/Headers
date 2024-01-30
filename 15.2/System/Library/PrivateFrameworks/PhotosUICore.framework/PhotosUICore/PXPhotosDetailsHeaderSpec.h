@interface PXPhotosDetailsHeaderSpec : PXFeatureSpec

@property (readonly, nonatomic) unsigned long long contentInsetEdges;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } playButtonSize;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (double)defaultCornerRadius;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a0;

@end
