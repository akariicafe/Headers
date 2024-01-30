@class NSMutableArray;

@interface ATXHeroEntriesPb : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _adamIds;
    struct { int *list; unsigned long long count; unsigned long long size; } _deltaLatitudes;
    struct { int *list; unsigned long long count; unsigned long long size; } _deltaLongitudes;
    struct { BOOL *list; unsigned long long count; unsigned long long size; } _isTouristApps;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _muids;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _radius;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _ranks;
}

@property (nonatomic) int tileLatitudeE7;
@property (nonatomic) int tileLongitudeE7;
@property (readonly, nonatomic) unsigned long long deltaLatitudesCount;
@property (readonly, nonatomic) int *deltaLatitudes;
@property (readonly, nonatomic) unsigned long long deltaLongitudesCount;
@property (readonly, nonatomic) int *deltaLongitudes;
@property (readonly, nonatomic) unsigned long long adamIdsCount;
@property (readonly, nonatomic) unsigned int *adamIds;
@property (readonly, nonatomic) unsigned long long isTouristAppsCount;
@property (readonly, nonatomic) BOOL *isTouristApps;
@property (readonly, nonatomic) unsigned long long ranksCount;
@property (readonly, nonatomic) unsigned int *ranks;
@property (readonly, nonatomic) unsigned long long radiusCount;
@property (readonly, nonatomic) unsigned int *radius;
@property (retain, nonatomic) NSMutableArray *urlHashs;
@property (retain, nonatomic) NSMutableArray *poiCategorys;
@property (readonly, nonatomic) unsigned long long muidsCount;
@property (readonly, nonatomic) unsigned long long *muids;

+ (Class)poiCategoryType;
+ (Class)urlHashType;

- (void)clearDeltaLatitudes;
- (void)addDeltaLatitude:(int)a0;
- (void)setRadius:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearRanks;
- (void)setMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearDeltaLongitudes;
- (unsigned int)adamIdAtIndex:(unsigned long long)a0;
- (BOOL)isTouristAppAtIndex:(unsigned long long)a0;
- (void)addRadius:(unsigned int)a0;
- (void)setIsTouristApps:(BOOL *)a0 count:(unsigned long long)a1;
- (id)urlHashAtIndex:(unsigned long long)a0;
- (void)setRanks:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addAdamId:(unsigned int)a0;
- (void)addMuid:(unsigned long long)a0;
- (int)deltaLongitudeAtIndex:(unsigned long long)a0;
- (unsigned long long)muidAtIndex:(unsigned long long)a0;
- (void)clearRadius;
- (void)clearMuids;
- (void)copyTo:(id)a0;
- (void)addUrlHash:(id)a0;
- (void)dealloc;
- (unsigned long long)urlHashsCount;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setAdamIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearAdamIds;
- (unsigned long long)hash;
- (void)clearPoiCategorys;
- (void)writeTo:(id)a0;
- (id)poiCategoryAtIndex:(unsigned long long)a0;
- (unsigned int)rankAtIndex:(unsigned long long)a0;
- (void)addDeltaLongitude:(int)a0;
- (unsigned int)radiusAtIndex:(unsigned long long)a0;
- (void)setDeltaLongitudes:(int *)a0 count:(unsigned long long)a1;
- (void)clearUrlHashs;
- (BOOL)readFrom:(id)a0;
- (void)clearIsTouristApps;
- (id)description;
- (void)addRank:(unsigned int)a0;
- (void)setDeltaLatitudes:(int *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (unsigned long long)poiCategorysCount;
- (int)deltaLatitudeAtIndex:(unsigned long long)a0;
- (void)addPoiCategory:(id)a0;
- (void)addIsTouristApp:(BOOL)a0;

@end
