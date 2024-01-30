@class NSArray, SearchUISection;

@interface SearchUISectionModel : NSObject

@property (nonatomic) BOOL drawPlattersIfNecessary;
@property (retain, nonatomic) NSArray *rowModels;
@property (readonly, nonatomic) SearchUISection *section;
@property (readonly, nonatomic) BOOL shouldHeightMatchSection;

+ (id)sectionModelWithRows:(id)a0 drawPlattersIfNecessary:(BOOL)a1 section:(id)a2;
+ (id)sectionModelWithGridRowModels:(id)a0 numberOfColumns:(long long)a1 section:(id)a2;
+ (id)sectionModelWithScrollingRowModels:(id)a0 numberOfRows:(long long)a1 section:(id)a2;

- (void)loadIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)removeRowModelAtIndex:(long long)a0;
- (id)overriddenAccessibilityIdentifier;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 collectionModel:(id)a2;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (void).cxx_destruct;
- (id)initWithRowModels:(id)a0 section:(id)a1;

@end
