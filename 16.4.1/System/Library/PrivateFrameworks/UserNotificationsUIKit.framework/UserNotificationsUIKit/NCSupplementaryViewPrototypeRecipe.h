@class NSString, NSMutableDictionary;
@protocol NCSupplementaryViewPrototypeRecipeDelegate;

@interface NCSupplementaryViewPrototypeRecipe : NSObject <NCSupplementaryViewPrototypeRecipeViewControllerDelegate>

@property (weak, nonatomic) id<NCSupplementaryViewPrototypeRecipeDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *lastModifiedDatesByGroupingIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedInstance;
+ (void)registerRecipeWithDelegate:(id)a0;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)requestsUpdatePositionIfNeededForPrototypeRecipeViewController:(id)a0;
- (long long)_compareByAgeForViewController:(id)a0 otherViewController:(id)a1;
- (id)_mostRecentDateForGroupingIdentifier:(id)a0;
- (void)_presentSupplementaryViewController;
- (void)_registerRecipeWithDelegate:(id)a0;
- (void)_setSortComparatorsForContainer:(id)a0;
- (id)_supplementaryViewsTestRecipeWithDelegate:(id)a0;
- (void)_updateGroupLastModifiedDateForViewController:(id)a0;
- (unsigned long long)prototypeRecipeViewController:(id)a0 requestsCountForGroupWithIdentifier:(id)a1;
- (void)recipeMenuViewController:(id)a0 requestsInsertContentViewController:(id)a1;
- (void)requestsInsertForPrototypeRecipeViewController:(id)a0;
- (void)requestsRemovalForPrototypeRecipeViewController:(id)a0;
- (void)requestsUpdateForPrototypeRecipeViewController:(id)a0;

@end
