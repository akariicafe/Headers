@class NSString, NSDate;

@interface PHMoment : PHAssetCollection

@property (readonly, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned short processedLocation;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSString *processedLocationTypeString;
@property (readonly, nonatomic) double approximateLatitude;
@property (readonly, nonatomic) double approximateLongitude;
@property (readonly, nonatomic) double gpsHorizontalAccuracy;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) int timeZoneOffset;
@property (readonly, nonatomic) NSDate *representativeDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) float aggregationScore;

+ (id)fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)a0 options:(id)a1;
+ (id)identifierCode;
+ (id)fetchMomentUUIDByAssetUUIDForAssets:(id)a0 options:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchType;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)_fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)a0 photoLibrary:(id)a1;
+ (id)managedEntityName;

- (id)localizedTitle;
- (BOOL)canPerformEditOperation:(long long)a0;
- (Class)changeRequestClass;
- (void).cxx_destruct;
- (id)localizedSubtitle;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (BOOL)hasLocationInfo;
- (void)_cacheLocationWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)canShowAvalancheStacks;
- (id)localizedLocationNames;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
