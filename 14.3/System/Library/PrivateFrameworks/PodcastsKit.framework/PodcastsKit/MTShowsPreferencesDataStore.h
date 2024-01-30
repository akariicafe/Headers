@interface MTShowsPreferencesDataStore : NSObject

@property (nonatomic) long long sortOrder;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)sortDescriptorsForSortType:(long long)a0;

- (id)sortDescriptors;
- (long long)_sortTypeForString:(id)a0;
- (id)_stringForSortType:(long long)a0;

@end
