@class NSMutableArray, VCPProtoBounds;

@interface VCPProtoImageHumanPoseResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) float confidence;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (nonatomic) int flags;
@property (retain, nonatomic) NSMutableArray *keypoints;

+ (id)resultFromLegacyDictionary:(id)a0;
+ (Class)keypointsType;

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
- (void)addKeypoints:(id)a0;
- (unsigned long long)keypointsCount;
- (void)clearKeypoints;
- (id)keypointsAtIndex:(unsigned long long)a0;

@end
