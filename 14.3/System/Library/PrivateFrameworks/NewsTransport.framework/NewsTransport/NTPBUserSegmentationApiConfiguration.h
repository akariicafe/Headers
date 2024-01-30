@class NSString;

@interface NTPBUserSegmentationApiConfiguration : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserSegmentationApiModThreshold;
@property (retain, nonatomic) NSString *userSegmentationApiModThreshold;
@property (readonly, nonatomic) BOOL hasUserSegmentationApiModMax;
@property (retain, nonatomic) NSString *userSegmentationApiModMax;
@property (readonly, nonatomic) BOOL hasUserSegmentationRefreshRate;
@property (retain, nonatomic) NSString *userSegmentationRefreshRate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
