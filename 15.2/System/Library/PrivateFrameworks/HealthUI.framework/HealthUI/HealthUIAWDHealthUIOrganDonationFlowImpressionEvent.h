@interface HealthUIAWDHealthUIOrganDonationFlowImpressionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char sourceOfFlowImpression : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSourceOfFlowImpression;
@property (nonatomic) int sourceOfFlowImpression;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)sourceOfFlowImpressionAsString:(int)a0;
- (int)StringAsSourceOfFlowImpression:(id)a0;

@end
