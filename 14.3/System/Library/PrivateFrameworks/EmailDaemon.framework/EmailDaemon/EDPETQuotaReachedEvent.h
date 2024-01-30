@interface EDPETQuotaReachedEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying> {
    struct { unsigned char droppedEventsCount : 1; unsigned char timestamp : 1; unsigned char sequenceNumber : 1; unsigned char timezoneOffset : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasTimezoneOffset;
@property (nonatomic) int timezoneOffset;
@property (nonatomic) BOOL hasDroppedEventsCount;
@property (nonatomic) unsigned long long droppedEventsCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)messageFrameType;

@end
