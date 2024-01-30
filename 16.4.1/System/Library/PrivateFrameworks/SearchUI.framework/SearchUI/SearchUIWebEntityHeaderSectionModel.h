@interface SearchUIWebEntityHeaderSectionModel : SearchUISectionModel

- (id)overriddenAccessibilityIdentifier;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 collectionModel:(id)a2;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsets;
- (struct CGSize { double x0; double x1; })heroCardAbsoluteSize;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })heroItemInsets;
- (double)outerGroupInterItemSpacing;

@end
