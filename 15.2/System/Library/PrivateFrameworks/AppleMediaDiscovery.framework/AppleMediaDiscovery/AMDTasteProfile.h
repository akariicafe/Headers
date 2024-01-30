@class NSString, NSData;

@interface AMDTasteProfile : NSManagedObject

@property (nonatomic) short domain;
@property (copy, nonatomic) NSString *featureName;
@property (nonatomic) long long lastUpdated;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSData *value;

+ (id)getFeatureWithName:(id)a0 inDomain:(id)a1 error:(id *)a2;
+ (long long)getUpdateTimeForSource:(id)a0 inDomain:(id)a1;
+ (id)fetchRequest;
+ (id)deleteWithPredicates:(id)a0 error:(id *)a1;
+ (id)getPurchasedArcadeGamesSet:(id *)a0;
+ (id)getEntries:(id)a0 error:(id *)a1;
+ (id)getUserIdForDomain:(id)a0;
+ (void)saveMinimalCToLMapForModelId:(id)a0 usingMapData:(id)a1 andPurchases:(id)a2;
+ (id)refreshAppInformationTasteProfile:(id *)a0;
+ (BOOL)hasArcade:(id *)a0;
+ (id)deleteAll:(id *)a0;
+ (id)refreshServerTasteProfile:(id)a0 error:(id *)a1;
+ (id)getPurchasedAppsSet:(id *)a0;
+ (id)deleteEntriesOfFeature:(id)a0 withDomain:(long long)a1 error:(id *)a2;
+ (id)getFeatureValueWithName:(id)a0 inDomain:(id)a1 error:(id *)a2;
+ (id)getStorefrontIdForDomain:(id)a0;
+ (void)refreshCToLMaps;
+ (id)refreshAggregationTasteProfileForDomain:(id)a0 forUser:(id)a1 andStoreFrontId:(unsigned int)a2 error:(id *)a3;
+ (id)deleteAppInfoEntries:(id *)a0;
+ (id)fetchTasteProfile:(id *)a0;
+ (id)saveTasteProfileEntriesFromDict:(id)a0 inDomain:(id)a1 forSource:(id)a2 error:(id *)a3;

@end
