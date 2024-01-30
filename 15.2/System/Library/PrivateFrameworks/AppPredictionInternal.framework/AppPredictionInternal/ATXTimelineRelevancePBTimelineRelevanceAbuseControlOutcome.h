@interface ATXTimelineRelevancePBTimelineRelevanceAbuseControlOutcome : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char outcomeType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL hasOutcomeType;
@property (nonatomic) int outcomeType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)outcomeTypeAsString:(int)a0;
- (int)StringAsOutcomeType:(id)a0;

@end
