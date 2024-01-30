@class CHCoreDataController, NSDictionary, NSError, NSPersistentContainer;

@interface CHCustomCategories : NSObject

@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) CHCoreDataController *coreDataController;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSDictionary *intToUUIDMapping;

- (id)init;
- (void).cxx_destruct;
- (id)categoryForBundleId:(id)a0;
- (void)categoriesForBundleId:(id)a0 completion:(id /* block */)a1;
- (void)categoriesForBundleIdSet:(id)a0 completion:(id /* block */)a1;
- (id)customCategoryVersion;
- (id)extractDataFromCoreDataResult:(id)a0;
- (id)fetchCategoriesForBundleId:(id)a0;
- (id)loadMappingFromFile;

@end
