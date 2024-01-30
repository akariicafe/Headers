@class NSIndexPath, NTKCFaceDetailComplicationCellProvider, NSArray, NTKComplicationPickerDetailViewConfiguration, CNContactStoreDataSource, NSString, UITableView, CNContactFormatter;

@interface NTKPeopleDetailComplicationPickerDataSource : NSObject <UITableViewDataSource>

@property (class, readonly, nonatomic) CNContactFormatter *sharedFormatter;

@property (readonly, nonatomic) NSArray *allFavoriteContacts;
@property (readonly, nonatomic) CNContactStoreDataSource *allContactsDataSource;
@property (readonly, nonatomic) NTKCFaceDetailComplicationCellProvider *pickerCellProvider;
@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NTKComplicationPickerDetailViewConfiguration *configuration;
@property (readonly, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newDataSourceWithName:(id)a0;
+ (id)_descriptorForRequiredKeysWithDescription:(id)a0;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)_contactAtIndexPath:(id)a0;
- (void)_reloadData;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)_sectionIndexTitles;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)_numberOfItemsInSection:(long long)a0;
- (id)_allFavoriteContactsSorted;
- (void)_contactStoreChanged:(id)a0;
- (void)_favoritesChanged:(id)a0;
- (BOOL)_isFavoriteAtIndexPath:(id)a0;
- (BOOL)_favoritesSectionNeeded;
- (id)_allContactsSections;
- (long long)_sectionForTitleIndex:(long long)a0;
- (long long)_totalSectionCount;
- (id)complicationItemForIndexPath:(id)a0;
- (BOOL)_itemIsSelectedAtIndexPath:(id)a0;
- (long long)_contactIndexForIdentifier:(id)a0 inContactList:(id)a1;
- (id)initWithTableView:(id)a0 detailConfiguration:(id)a1;
- (long long)collectionView:(id)a0 sectionForSectionTitleIndex:(long long)a1;
- (id)sectionIndexTitlesForCollectionView:(id)a0;
- (id)_indexPathForIdentifier:(id)a0;

@end
