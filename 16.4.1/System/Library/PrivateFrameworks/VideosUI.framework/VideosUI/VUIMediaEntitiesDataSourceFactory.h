@interface VUIMediaEntitiesDataSourceFactory : NSObject

+ (id)dataSourceForShelf:(long long)a0 withLibrary:(id)a1;
+ (id)dataSourceForGenre:(id)a0 withLibrary:(id)a1;
+ (id)_dataSourceForShelfType:(long long)a0 withLibrary:(id)a1 withOwnerIdentifier:(id)a2;
+ (id)_fetchRequestForGenre:(id)a0;
+ (id)dataSourceForCategoryType:(long long)a0;
+ (id)dataSourceForCategoryType:(long long)a0 withFamilyMember:(id)a1;
+ (id)dataSourceForCategoryType:(long long)a0 withLibrary:(id)a1;
+ (id)dataSourceForCategoryType:(long long)a0 withLibrary:(id)a1 withOwnerIdentifier:(id)a2;
+ (id)dataSourceForFetchRequest:(id)a0 withLibrary:(id)a1;
+ (id)dataSourceForGenre:(id)a0 withFamilyMember:(id)a1;
+ (id)dataSourceForShelf:(long long)a0 withFamilyMember:(id)a1;
+ (id)episodesDataSourceForSeasonIdentifier:(id)a0 showIdentifier:(id)a1 withFamilyMember:(id)a2;
+ (id)episodesDataSourceForShowIdentifier:(id)a0 withFamilyMember:(id)a1;
+ (id)seasonsDataSourceForSeasonIdentifier:(id)a0 showIdentifier:(id)a1 withFamilyMember:(id)a2;
+ (id)seasonsDataSourceForShowIdentifier:(id)a0 withFamilyMember:(id)a1;

@end
