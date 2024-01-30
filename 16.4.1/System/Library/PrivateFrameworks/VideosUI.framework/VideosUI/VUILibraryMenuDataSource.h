@class NSSet, VUIMenuDataSource;

@interface VUILibraryMenuDataSource : VUILibraryDataSource

@property (retain, nonatomic) VUIMenuDataSource *menuItems;
@property (retain, nonatomic) NSSet *validCategories;

- (void).cxx_destruct;
- (id)initWithValidCategories:(id)a0;

@end
