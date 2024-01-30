@interface HDAWDHealthKitIngestionLatencyEvent : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char indexInSession : 1; unsigned char maxDelayUs : 1; unsigned char meanDelayUs : 1; unsigned char minDelayUs : 1; unsigned char sampleCount : 1; unsigned char startDate : 1; unsigned char stdDelayUs : 1; unsigned char timestamp : 1; unsigned char typeIdentifier : 1; unsigned char inSession : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTypeIdentifier;
@property (nonatomic) long long typeIdentifier;
@property (nonatomic) BOOL hasInSession;
@property (nonatomic) BOOL inSession;
@property (nonatomic) BOOL hasMinDelayUs;
@property (nonatomic) long long minDelayUs;
@property (nonatomic) BOOL hasMaxDelayUs;
@property (nonatomic) long long maxDelayUs;
@property (nonatomic) BOOL hasMeanDelayUs;
@property (nonatomic) long long meanDelayUs;
@property (nonatomic) BOOL hasStdDelayUs;
@property (nonatomic) long long stdDelayUs;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) BOOL hasSampleCount;
@property (nonatomic) long long sampleCount;
@property (nonatomic) BOOL hasIndexInSession;
@property (nonatomic) long long indexInSession;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
