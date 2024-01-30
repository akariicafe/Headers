@interface PXZoomableInlineHeadersLayoutSpec : PXFeatureSpec {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _headerFloatMargins;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _headerFloatMarginsWithTallSafeAreaInsets;
}

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) double headerOffsetY;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })headerFloatMarginsForSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
