@class NSMutableArray, NSMutableDictionary;

@interface HKDisplayCategoryController : NSObject {
    NSMutableArray *_displayCategories;
    NSMutableDictionary *_displayCategoriesByCategoryID;
}

+ (id)sharedInstance;

- (id)allDisplayCategories;
- (void)_initializeDisplayCategories;
- (id)categoryWithID:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
