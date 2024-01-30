@class NSString, VCPProtoBounds, VCPProtoTimeRange;

@interface VCPProtoMovieHumanActionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (nonatomic) float absoluteScore;
@property (nonatomic) float relativeScore;
@property (nonatomic) float humanScore;
@property (readonly, nonatomic) BOOL hasFaceId;
@property (retain, nonatomic) NSString *faceId;
@property (readonly, nonatomic) BOOL hasBounds;
@property (retain, nonatomic) VCPProtoBounds *bounds;

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
