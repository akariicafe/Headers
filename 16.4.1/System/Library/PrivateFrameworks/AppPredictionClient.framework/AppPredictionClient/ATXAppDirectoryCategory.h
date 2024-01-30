@class NSArray, NSString;

@interface ATXAppDirectoryCategory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long categoryID;
@property (readonly, nonatomic) NSArray *appBundleIDs;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)localizedStringForNonScreenTimeCategoryID:(unsigned long long)a0;
+ (BOOL)shouldCategoryAlwaysMergeWithParent:(unsigned long long)a0;
+ (BOOL)isCategoryiTunesGenre:(unsigned long long)a0;
+ (unsigned long long)parentCategoryForCategory:(unsigned long long)a0;
+ (BOOL)shouldCategoryNeverMergeWithParent:(unsigned long long)a0;
+ (BOOL)isCategoryScreenTime:(unsigned long long)a0;
+ (unsigned long long)screenTimeCategoryIDForCategoryIdentifier:(id)a0;
+ (id)localizedStringForCategoryID:(unsigned long long)a0;
+ (unsigned long long)_parentCategoryForiTunesGenreID:(unsigned long long)a0;
+ (BOOL)isCategorySpecial:(unsigned long long)a0;
+ (BOOL)_instanceSpecificLocalizedStringExistsForCategory:(unsigned long long)a0;
+ (BOOL)isCategoryiTunesGamesSubgenre:(unsigned long long)a0;
+ (BOOL)isCategory:(unsigned long long)a0 descendantOfCategory:(unsigned long long)a1;
+ (id)categoryIdentifierForScreenTimeCategoryID:(unsigned long long)a0;
+ (unsigned long long)appDirectoryCategoryStringToAppDirectoryCategoryID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)updateCategoryLocalizedNameWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCategoryID:(unsigned long long)a0 appBundleIDs:(id)a1 localizedName:(id)a2;
- (id)initWithCategoryID:(unsigned long long)a0 appBundleIDs:(id)a1;
- (id)localizedStringForCategoryID:(unsigned long long)a0;
- (void)updateAppBundleIDs:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
