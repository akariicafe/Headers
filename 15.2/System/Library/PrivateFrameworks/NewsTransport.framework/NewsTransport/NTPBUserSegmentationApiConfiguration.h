@class NSString;

@interface NTPBUserSegmentationApiConfiguration : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserSegmentationApiModThreshold;
@property (retain, nonatomic) NSString *userSegmentationApiModThreshold;
@property (readonly, nonatomic) BOOL hasUserSegmentationApiModMax;
@property (retain, nonatomic) NSString *userSegmentationApiModMax;
@property (readonly, nonatomic) BOOL hasUserSegmentationRefreshRate;
@property (retain, nonatomic) NSString *userSegmentationRefreshRate;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
