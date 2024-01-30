@class NSString;

@interface AWDSymptomsSDMParticipant : PBCodable <NSCopying> {
    struct { unsigned char additionalFlags : 1; unsigned char dlThroughputBytesPerSecond : 1; unsigned char participationDelta : 1; unsigned char periodDuration : 1; unsigned char ulThroughputBytesPerSecond : 1; } _has;
}

@property (nonatomic) BOOL hasParticipationDelta;
@property (nonatomic) unsigned long long participationDelta;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasPeriodDuration;
@property (nonatomic) unsigned long long periodDuration;
@property (nonatomic) BOOL hasDlThroughputBytesPerSecond;
@property (nonatomic) unsigned long long dlThroughputBytesPerSecond;
@property (nonatomic) BOOL hasUlThroughputBytesPerSecond;
@property (nonatomic) unsigned long long ulThroughputBytesPerSecond;
@property (nonatomic) BOOL hasAdditionalFlags;
@property (nonatomic) unsigned long long additionalFlags;

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

@end
