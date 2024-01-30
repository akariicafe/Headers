@interface ATXFamilyCircleCache : NSObject

+ (id)cachedDefaultsKey;
+ (id)lastFetchDateDefaultsKey;

- (id)_requestUpdatedFamilyCircle;
- (id)fetchFamilyCircle;
- (id)_fetchFamilyCircleWithUserDefaults:(id)a0;
- (BOOL)hasiCloudFamily;

@end
