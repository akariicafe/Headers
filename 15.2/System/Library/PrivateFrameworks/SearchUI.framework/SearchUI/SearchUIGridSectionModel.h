@interface SearchUIGridSectionModel : SearchUISectionModel

@property unsigned long long numberOfColumns;

- (id)overriddenAccessibilityIdentifier;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 collectionModel:(id)a2;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (id)initWithRowModels:(id)a0 numberOfColumns:(long long)a1 section:(id)a2;
- (void)setCornerMaskRulesOnRowModelsForColumnCount:(unsigned long long)a0;

@end
