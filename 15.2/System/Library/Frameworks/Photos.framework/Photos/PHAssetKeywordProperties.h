@class NSSet;

@interface PHAssetKeywordProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSSet *keywordTitles;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)isToMany;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
