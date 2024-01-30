@interface VCPProtoLivePhotoKeyFrameStillResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) float sharpness;
@property (nonatomic) float textureness;
@property (nonatomic) BOOL hasFlash;
@property (nonatomic) float stillTime;

+ (id)resultFromLegacyDictionary:(id)a0;

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
