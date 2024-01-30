@interface HMSoftwareUpdateEventProtoSoftwareUpdateProgress : PBCodable <NSCopying> {
    struct { unsigned char estimatedTimeRemaining : 1; unsigned char percentageComplete : 1; } _has;
}

@property (nonatomic) BOOL hasPercentageComplete;
@property (nonatomic) float percentageComplete;
@property (nonatomic) BOOL hasEstimatedTimeRemaining;
@property (nonatomic) double estimatedTimeRemaining;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
