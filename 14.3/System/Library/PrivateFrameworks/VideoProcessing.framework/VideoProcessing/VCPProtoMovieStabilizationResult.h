@class NSData;

@interface VCPProtoMovieStabilizationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) float analysisConfidence;
@property (nonatomic) BOOL gyroStabilization;
@property (readonly, nonatomic) BOOL hasRecipeBlob;
@property (retain, nonatomic) NSData *recipeBlob;

+ (id)resultFromLegacyDictionary:(id)a0;

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

@end
