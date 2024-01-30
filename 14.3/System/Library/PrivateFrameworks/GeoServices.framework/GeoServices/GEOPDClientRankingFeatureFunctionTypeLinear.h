@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeLinear : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    float _featureMaxRelativeValue;
    float _featureMeanValue;
    float _featureWeight;
    struct { unsigned char has_featureMaxRelativeValue : 1; unsigned char has_featureMeanValue : 1; unsigned char has_featureWeight : 1; } _flags;
}

@property (nonatomic) BOOL hasFeatureWeight;
@property (nonatomic) float featureWeight;
@property (nonatomic) BOOL hasFeatureMaxRelativeValue;
@property (nonatomic) float featureMaxRelativeValue;
@property (nonatomic) BOOL hasFeatureMeanValue;
@property (nonatomic) float featureMeanValue;
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
