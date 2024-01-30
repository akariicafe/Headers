@class GEOPDClientRankingFeatureFunctionTypeLinear, GEOPDClientRankingFeatureFunctionTypeDiscrete, GEOPDClientRankingFeatureTypeResult, PBDataReader, GEOPDClientRankingFeatureTypeSource, PBUnknownFields;

@interface GEOPDClientRankingFeatureMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDClientRankingFeatureTypeResult *_featureTypeResult;
    GEOPDClientRankingFeatureTypeSource *_featureTypeSource;
    GEOPDClientRankingFeatureFunctionTypeDiscrete *_functionTypeDiscrete;
    GEOPDClientRankingFeatureFunctionTypeLinear *_functionTypeLinear;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _featureType;
    int _functionType;
    struct { unsigned char has_featureType : 1; unsigned char has_functionType : 1; unsigned char read_unknownFields : 1; unsigned char read_featureTypeResult : 1; unsigned char read_featureTypeSource : 1; unsigned char read_functionTypeDiscrete : 1; unsigned char read_functionTypeLinear : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasFeatureType;
@property (nonatomic) int featureType;
@property (readonly, nonatomic) BOOL hasFeatureTypeSource;
@property (retain, nonatomic) GEOPDClientRankingFeatureTypeSource *featureTypeSource;
@property (readonly, nonatomic) BOOL hasFeatureTypeResult;
@property (retain, nonatomic) GEOPDClientRankingFeatureTypeResult *featureTypeResult;
@property (nonatomic) BOOL hasFunctionType;
@property (nonatomic) int functionType;
@property (readonly, nonatomic) BOOL hasFunctionTypeLinear;
@property (retain, nonatomic) GEOPDClientRankingFeatureFunctionTypeLinear *functionTypeLinear;
@property (readonly, nonatomic) BOOL hasFunctionTypeDiscrete;
@property (retain, nonatomic) GEOPDClientRankingFeatureFunctionTypeDiscrete *functionTypeDiscrete;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)functionTypeAsString:(int)a0;
- (int)StringAsFunctionType:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)featureTypeAsString:(int)a0;
- (int)StringAsFeatureType:(id)a0;
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
