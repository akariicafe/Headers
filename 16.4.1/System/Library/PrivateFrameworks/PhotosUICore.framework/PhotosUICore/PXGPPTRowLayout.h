@interface PXGPPTRowLayout : PXGStackLayout <PXGSublayoutProvider>

@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) double hue;

- (id)init;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithNumberOfItems:(long long)a0 hue:(double)a1;

@end
