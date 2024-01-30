@class NSArray, NSString;

@interface ATXAppDirectoryCategory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long categoryID;
@property (readonly, nonatomic) NSArray *appBundleIDs;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)categoryIdentifierForScreenTimeCategoryID:(unsigned long long)a0;
+ (unsigned long long)screenTimeCategoryIDForCategoryIdentifier:(id)a0;
+ (BOOL)isCategoryScreenTime:(unsigned long long)a0;
+ (BOOL)isCategorySpecial:(unsigned long long)a0;
+ (id)localizedStringForCategoryID:(unsigned long long)a0;
+ (BOOL)_instanceSpecificLocalizedStringExistsForCategory:(unsigned long long)a0;
+ (BOOL)isCategoryiTunesGenre:(unsigned long long)a0;
+ (id)localizedStringForNonScreenTimeCategoryID:(unsigned long long)a0;

- (void)updateCategoryLocalizedNameWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)localizedStringForCategoryID:(unsigned long long)a0;
- (id)initWithCategoryID:(unsigned long long)a0 appBundleIDs:(id)a1 localizedName:(id)a2;
- (id)initWithCategoryID:(unsigned long long)a0 appBundleIDs:(id)a1;
- (void)updateAppBundleIDs:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
