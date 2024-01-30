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

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)a0 options:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)fetchMomentUUIDByAssetUUIDForAssets:(id)a0 options:(id)a1;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)_fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)a0 photoLibrary:(id)a1;

- (BOOL)canShowAvalancheStacks;
- (void)_cacheLocationWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (BOOL)canPerformEditOperation:(long long)a0;
- (BOOL)hasLocationInfo;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)localizedSubtitle;
- (id)localizedLocationNames;
- (id)localizedTitle;

@end
