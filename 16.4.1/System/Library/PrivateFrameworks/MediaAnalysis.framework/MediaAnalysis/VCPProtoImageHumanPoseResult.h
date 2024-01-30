@class NSMutableArray, VCPProtoBounds;

@interface VCPProtoImageHumanPoseResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) float confidence;
@property (retain, nonatomic) VCPProtoBounds *bounds;
@property (nonatomic) int flags;
@property (retain, nonatomic) NSMutableArray *keypoints;

+ (Class)keypointsType;
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
- (void)addKeypoints:(id)a0;
- (void)clearKeypoints;
- (id)exportToLegacyDictionary;
- (id)keypointsAtIndex:(unsigned long long)a0;
- (unsigned long long)keypointsCount;

@end
