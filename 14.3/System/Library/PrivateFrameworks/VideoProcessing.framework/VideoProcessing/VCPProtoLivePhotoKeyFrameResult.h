@class NSMutableArray;

@interface VCPProtoLivePhotoKeyFrameResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char contentScore : 1; unsigned char globalQualityScore : 1; } _has;
}

@property (nonatomic) double timestamp;
@property (nonatomic) float qualityScoreForLivePhoto;
@property (nonatomic) float visualPleasingScore;
@property (nonatomic) float overallFaceQualityScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float penaltyScore;
@property (nonatomic) float textureScore;
@property (nonatomic) float sharpness;
@property (retain, nonatomic) NSMutableArray *faceResults;
@property (nonatomic) BOOL hasGlobalQualityScore;
@property (nonatomic) float globalQualityScore;
@property (nonatomic) BOOL hasContentScore;
@property (nonatomic) float contentScore;

+ (Class)faceResultsType;
+ (id)resultFromLegacyDictionary:(id)a0;

- (unsigned long long)faceResultsCount;
- (void)clearFaceResults;
- (id)faceResultsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (void)addFaceResults:(id)a0;

@end
