@interface PXMonthsAssetsSectionHeaderLayoutSpec : PXCuratedLibrarySectionHeaderLayoutSpec

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 variant:(long long)a2;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 variant:(long long)a3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedContentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)wantsInlineHeader;
- (unsigned long long)inlineHeaderStyle;

@end
