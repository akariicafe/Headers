@class VCPProtoBounds, NSString, VCPProtoTimeRange, NSMutableArray;

@interface VCPProtoLivePhotoHumanActionClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) NSMutableArray *classifications;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (readonly, nonatomic) BOOL hasFaceId;
@property (retain, nonatomic) NSString *faceId;

+ (Class)classificationType;
+ (id)resultFromLegacyDictionary:(id)a0;

- (void)addClassification:(id)a0;
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
- (unsigned long long)classificationsCount;
- (void)clearClassifications;
- (id)classificationAtIndex:(unsigned long long)a0;

@end
