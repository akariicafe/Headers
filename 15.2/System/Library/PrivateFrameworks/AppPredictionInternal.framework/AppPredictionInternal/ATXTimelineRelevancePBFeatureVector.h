@interface ATXTimelineRelevancePBFeatureVector : PBCodable <NSCopying> {
    struct { unsigned char appLaunchCount : 1; unsigned char appLaunchPopularity : 1; } _has;
}

@property (nonatomic) BOOL hasAppLaunchPopularity;
@property (nonatomic) long long appLaunchPopularity;
@property (nonatomic) BOOL hasAppLaunchCount;
@property (nonatomic) long long appLaunchCount;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
