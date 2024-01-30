@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    float _featureValueThresholdHigh;
    float _featureValueThresholdLow;
    float _featureWeightHigh;
    float _featureWeightLow;
    struct { unsigned char has_featureValueThresholdHigh : 1; unsigned char has_featureValueThresholdLow : 1; unsigned char has_featureWeightHigh : 1; unsigned char has_featureWeightLow : 1; } _flags;
}

@property (nonatomic) BOOL hasFeatureValueThresholdLow;
@property (nonatomic) float featureValueThresholdLow;
@property (nonatomic) BOOL hasFeatureWeightLow;
@property (nonatomic) float featureWeightLow;
@property (nonatomic) BOOL hasFeatureValueThresholdHigh;
@property (nonatomic) float featureValueThresholdHigh;
@property (nonatomic) BOOL hasFeatureWeightHigh;
@property (nonatomic) float featureWeightHigh;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
