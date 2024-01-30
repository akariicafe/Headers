@interface PXRelatedSpec : PXFeatureSpec

@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) struct CGSize { double width; double height; } interEntrySpacing;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a0;

@end
