@class NSArray, NSMutableDictionary, NSString, AVTUIEnvironment;
@protocol AVTTaskScheduler;

@interface AVTAvatarAttributeEditorDataSource : NSObject <AVTAvatarAttributeEditorModelManagerDelegateInternal>

@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSMutableDictionary *sectionControllers;
@property (retain, nonatomic) NSMutableDictionary *sectionCoordinatorsByProvider;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTTaskScheduler> renderingScheduler;
@property (nonatomic) unsigned long long currentCategoryIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)indexForCurrentCategoryGivenPreferredIdentifier:(id)a0 categories:(id)a1;
+ (id)sectionControllerForSection:(id)a0 renderingScheduler:(id)a1 environment:(id)a2;

- (id)categoryAtIndex:(long long)a0;
- (void).cxx_destruct;
- (long long)numberOfCategories;
- (id)sectionControllerForSection:(id)a0;
- (id)initWithCategories:(id)a0 currentCategoryIdentifier:(id)a1 renderingScheduler:(id)a2 environment:(id)a3;
- (void)updateCoordinatorsFromCategory:(id)a0 currentCoordinators:(id)a1;
- (void)discardControllersForNonCurrentCategory;
- (id)sectionForIndex:(long long)a0 inCategoryAtIndex:(long long)a1;
- (id)sectionProviderForSectionAtIndex:(long long)a0 inCategoryAtIndex:(long long)a1;
- (BOOL)shouldDisplaySectionWithDisplayCondition:(id)a0 inCategoryAtIndex:(unsigned long long)a1;
- (id)initWithCategories:(id)a0 currentCategoryIdentifier:(id)a1 renderingScheduler:(id)a2;
- (void)reloadWithCategories:(id)a0 currentCategoryIndex:(unsigned long long)a1;
- (id)groupPickerItemsForCategories;
- (long long)numberOfSectionsForCategoryAtIndex:(long long)a0;
- (id)sectionControllerForSectionIndex:(long long)a0 inCategoryAtIndex:(long long)a1;
- (id)sectionCoordinatorForSectionAtIndex:(long long)a0 inCategoryAtIndex:(long long)a1;
- (long long)indexForSection:(id)a0 inCategoryAtIndex:(long long)a1;
- (id)indexesForSectionsExcludingSectionsWithIdentifiers:(id)a0 inCategoryAtIndex:(long long)a1;
- (id)indexesForSectionsPresentIn:(id)a0 butNotIn:(id)a1;
- (id)currentCategoryIdentifier;

@end
