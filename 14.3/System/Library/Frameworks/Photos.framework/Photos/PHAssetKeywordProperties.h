@class NSSet;

@interface PHAssetKeywordProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSSet *keywordTitles;

+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
