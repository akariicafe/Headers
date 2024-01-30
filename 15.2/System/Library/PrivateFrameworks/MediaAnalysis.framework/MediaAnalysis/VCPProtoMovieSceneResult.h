@class VCPProtoTimeRange;

@interface VCPProtoMovieSceneResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char distanceToPreviousScene : 1; unsigned char flickerScore : 1; unsigned char sceneprintDistanceToPreviousScene : 1; } _has;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) float qualityScore;
@property (nonatomic) BOOL hasDistanceToPreviousScene;
@property (nonatomic) float distanceToPreviousScene;
@property (nonatomic) BOOL hasFlickerScore;
@property (nonatomic) float flickerScore;
@property (nonatomic) BOOL hasSceneprintDistanceToPreviousScene;
@property (nonatomic) float sceneprintDistanceToPreviousScene;

+ (id)resultFromLegacyDictionary:(id)a0;

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
- (id)exportToLegacyDictionary;

@end
