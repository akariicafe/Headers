@class NSShadow;

@interface PXStoryMemoryFeedItemExtendedTraitCollection : PXStoryExtendedTraitCollection {
    double _viewportCornerRadius;
    NSShadow *_viewportShadow;
    long long _userInterfaceFeature;
}

- (long long)userInterfaceFeature;
- (double)viewportCornerRadius;
- (id)viewportShadow;
- (id)initWithSpecManager:(id)a0 initialReferenceSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
