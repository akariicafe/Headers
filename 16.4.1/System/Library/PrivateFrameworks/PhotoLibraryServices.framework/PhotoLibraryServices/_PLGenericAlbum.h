@class NSMutableSet, PLManagedAsset, NSNumber, PLManagedFolder;

@interface _PLGenericAlbum : PLManagedObject

@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (retain, nonatomic) NSNumber *kind;
@property (retain, nonatomic) NSMutableSet *albumLists;
@property (retain, nonatomic) PLManagedFolder *parentFolder;
@property (nonatomic) long long syncEventOrderKey;
@property (nonatomic) int customSortKey;
@property (nonatomic) BOOL customSortAscending;
@property (retain, nonatomic) PLManagedAsset *customKeyAsset;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

@end
