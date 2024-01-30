@interface PXGPPTRowStackLayout : PXGStackLayout <PXGSublayoutProvider> {
    double _rowHeight;
    long long _numberOfItemsPerRow;
}

- (id)initWithSettings:(id)a0;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;

@end
