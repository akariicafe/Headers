@class NSString;

@interface PGPhotosGraphProfile : CLSProfile

@property (class, readonly, nonatomic) NSString *poiUnknown;
@property (class, readonly, nonatomic) NSString *poiRestaurant;
@property (class, readonly, nonatomic) NSString *poiNightlife;
@property (class, readonly, nonatomic) NSString *poiShopping;
@property (class, readonly, nonatomic) NSString *poiTravel;
@property (class, readonly, nonatomic) NSString *poiCulture;
@property (class, readonly, nonatomic) NSString *poiMuseum;
@property (class, readonly, nonatomic) NSString *poiEntertainment;
@property (class, readonly, nonatomic) NSString *poiAmusementPark;
@property (class, readonly, nonatomic) NSString *poiPark;
@property (class, readonly, nonatomic) NSString *poiPerformance;
@property (class, readonly, nonatomic) NSString *poiStadium;
@property (class, readonly, nonatomic) NSString *poiActivity;
@property (class, readonly, nonatomic) NSString *poiDiving;
@property (class, readonly, nonatomic) NSString *poiHiking;
@property (class, readonly, nonatomic) NSString *poiFitness;
@property (class, readonly, nonatomic) NSString *poiHospital;
@property (class, readonly, nonatomic) NSString *roiUrban;
@property (class, readonly, nonatomic) NSString *roiBeach;
@property (class, readonly, nonatomic) NSString *roiMoutain;
@property (class, readonly, nonatomic) NSString *roiNature;
@property (class, readonly, nonatomic) NSString *roiWater;
@property (class, readonly, nonatomic) NSString *partOfDayMorning;
@property (class, readonly, nonatomic) NSString *partOfDayNoon;
@property (class, readonly, nonatomic) NSString *partOfDayAfternoon;
@property (class, readonly, nonatomic) NSString *partOfDayEvening;
@property (class, readonly, nonatomic) NSString *partOfDayNight;

+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)profileDependenciesIdentifiers;
+ (id)supportedMeaningClueKeys;
+ (id)blockedNamesToTraverse;
+ (id)blockedNames;
+ (BOOL)isBlockedTaxonomyNodeWithName:(id)a0;

- (void)_insertEventCluesForClueCollection:(id)a0;
- (void)_insertPlacesForClueCollection:(id)a0;
- (void)_insertSceneForClueCollection:(id)a0;
- (void)processResultsSynchronouslyForInvestigation:(id)a0 withProgressBlock:(id /* block */)a1;

@end
