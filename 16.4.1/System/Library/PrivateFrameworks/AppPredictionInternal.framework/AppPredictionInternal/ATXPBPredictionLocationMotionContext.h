@class ATXPBPredictionLocationOfInterest, NSData;

@interface ATXPBPredictionLocationMotionContext : PBCodable <NSCopying> {
    struct { unsigned char coarseGeohash : 1; unsigned char distanceFromGym : 1; unsigned char distanceFromHome : 1; unsigned char distanceFromSchool : 1; unsigned char distanceFromWork : 1; unsigned char geohash : 1; unsigned char largeGeohash : 1; unsigned char motionType : 1; unsigned char canPredictClipsGivenRecentMotion : 1; unsigned char locationEnabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPreviousLOI;
@property (retain, nonatomic) ATXPBPredictionLocationOfInterest *previousLOI;
@property (readonly, nonatomic) BOOL hasCurrentLOI;
@property (retain, nonatomic) ATXPBPredictionLocationOfInterest *currentLOI;
@property (nonatomic) BOOL hasMotionType;
@property (nonatomic) int motionType;
@property (readonly, nonatomic) BOOL hasCurrentLocation;
@property (retain, nonatomic) NSData *currentLocation;
@property (nonatomic) BOOL hasLocationEnabled;
@property (nonatomic) BOOL locationEnabled;
@property (nonatomic) BOOL hasDistanceFromHome;
@property (nonatomic) double distanceFromHome;
@property (nonatomic) BOOL hasDistanceFromWork;
@property (nonatomic) double distanceFromWork;
@property (nonatomic) BOOL hasDistanceFromSchool;
@property (nonatomic) double distanceFromSchool;
@property (nonatomic) BOOL hasDistanceFromGym;
@property (nonatomic) double distanceFromGym;
@property (nonatomic) BOOL hasCanPredictClipsGivenRecentMotion;
@property (nonatomic) BOOL canPredictClipsGivenRecentMotion;
@property (nonatomic) BOOL hasGeohash;
@property (nonatomic) unsigned long long geohash;
@property (nonatomic) BOOL hasCoarseGeohash;
@property (nonatomic) unsigned long long coarseGeohash;
@property (nonatomic) BOOL hasLargeGeohash;
@property (nonatomic) unsigned long long largeGeohash;

- (id)motionTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (int)StringAsMotionType:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
