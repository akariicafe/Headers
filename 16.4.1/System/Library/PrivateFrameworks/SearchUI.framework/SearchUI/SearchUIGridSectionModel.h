@interface SearchUIGridSectionModel : SearchUISectionModel

@property unsigned long long numberOfColumns;

- (void)setCornerMaskRulesOnRowModelsForColumnCount:(unsigned long long)a0;
- (id)overriddenAccessibilityIdentifier;
- (BOOL)needsHorizontalNavigation;
- (id)initWithRowModels:(id)a0 numberOfColumns:(long long)a1 section:(id)a2;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 collectionModel:(id)a2;

@end
