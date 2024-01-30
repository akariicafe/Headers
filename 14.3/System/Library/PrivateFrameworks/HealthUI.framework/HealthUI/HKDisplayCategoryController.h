@class NSMutableArray, NSMutableDictionary;

@interface HKDisplayCategoryController : NSObject {
    NSMutableArray *_displayCategories;
    NSMutableDictionary *_displayCategoriesByCategoryID;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)categoryWithID:(long long)a0;
- (void)_initializeDisplayCategories;
- (id)allDisplayCategories;

@end
