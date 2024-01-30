@interface PXYearAssetsSectionHeaderLayoutSpec : PXCuratedLibrarySectionHeaderLayoutSpec {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
}

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (void)setPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

@end
