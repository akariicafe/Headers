@interface SearchUIHorizontallyScrollingSectionModel : SearchUISectionModel

@property long long numberOfRows;

- (id)overriddenAccessibilityIdentifier;
- (BOOL)drawsBackground;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 collectionModel:(id)a2;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (BOOL)shouldHeightMatchSection;
- (id)initWithRowModels:(id)a0 section:(id)a1 numberOfRows:(long long)a2;

@end
