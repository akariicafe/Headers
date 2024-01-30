@class NSString, NSData;

@interface ATXPBHeroAppPrediction : PBCodable <NSCopying> {
    struct { unsigned char adamId : 1; unsigned char latitude : 1; unsigned char latitudeAtPredictionTime : 1; unsigned char longitude : 1; unsigned char longitudeAtPredictionTime : 1; unsigned char radius : 1; unsigned char rank : 1; unsigned char score : 1; unsigned char isTouristApp : 1; } _has;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasIsTouristApp;
@property (nonatomic) BOOL isTouristApp;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;
@property (readonly, nonatomic) BOOL hasClipMetadata;
@property (retain, nonatomic) NSData *clipMetadata;
@property (nonatomic) BOOL hasAdamId;
@property (nonatomic) long long adamId;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) long long rank;
@property (nonatomic) BOOL hasRadius;
@property (nonatomic) long long radius;
@property (nonatomic) BOOL hasLatitudeAtPredictionTime;
@property (nonatomic) double latitudeAtPredictionTime;
@property (nonatomic) BOOL hasLongitudeAtPredictionTime;
@property (nonatomic) double longitudeAtPredictionTime;
@property (readonly, nonatomic) BOOL hasPoiCategory;
@property (retain, nonatomic) NSString *poiCategory;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
