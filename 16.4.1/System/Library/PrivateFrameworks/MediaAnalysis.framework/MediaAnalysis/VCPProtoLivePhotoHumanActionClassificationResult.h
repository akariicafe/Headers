@class VCPProtoBounds, NSString, VCPProtoTimeRange, NSMutableArray;

@interface VCPProtoLivePhotoHumanActionClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) NSMutableArray *classifications;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (readonly, nonatomic) BOOL hasFaceId;
@property (retain, nonatomic) NSString *faceId;

+ (Class)classificationType;
+ (id)resultFromLegacyDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addClassification:(id)a0;
- (id)classificationAtIndex:(unsigned long long)a0;
- (unsigned long long)classificationsCount;
- (void)clearClassifications;
- (id)exportToLegacyDictionary;

@end
