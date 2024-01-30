@class NSMutableArray;

@interface ATXAppAndClipEntriesPb : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _adamIds;
    struct { int *list; unsigned long long count; unsigned long long size; } _deltaLatitudes;
    struct { int *list; unsigned long long count; unsigned long long size; } _deltaLongitudes;
    struct { BOOL *list; unsigned long long count; unsigned long long size; } _isTouristApps;
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

+ (Class)urlHashType;

- (void)clearAdamIds;
- (void)addUrlHash:(id)a0;
- (unsigned int)adamIdAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDeltaLatitudes:(int *)a0 count:(unsigned long long)a1;
- (void)mergeFrom:(id)a0;
- (id)urlHashAtIndex:(unsigned long long)a0;
- (void)setRadius:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)rankAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)setAdamIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setRanks:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearUrlHashs;
- (id)description;
- (void)setDeltaLongitudes:(int *)a0 count:(unsigned long long)a1;
- (void)clearDeltaLatitudes;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)radiusAtIndex:(unsigned long long)a0;
- (void)addIsTouristApp:(BOOL)a0;
- (void)addDeltaLongitude:(int)a0;
- (int)deltaLongitudeAtIndex:(unsigned long long)a0;
- (void)addDeltaLatitude:(int)a0;
- (void)clearRadius;
- (void)clearRanks;
- (void)clearDeltaLongitudes;
- (void)addAdamId:(unsigned int)a0;
- (void)setIsTouristApps:(BOOL *)a0 count:(unsigned long long)a1;
- (unsigned long long)urlHashsCount;
- (void)addRank:(unsigned int)a0;
- (void)addRadius:(unsigned int)a0;
- (int)deltaLatitudeAtIndex:(unsigned long long)a0;
- (BOOL)isTouristAppAtIndex:(unsigned long long)a0;
- (void)clearIsTouristApps;

@end
