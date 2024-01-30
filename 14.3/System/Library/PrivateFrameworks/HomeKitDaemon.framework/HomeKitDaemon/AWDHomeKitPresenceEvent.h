@interface AWDHomeKitPresenceEvent : PBCodable <NSCopying> {
    struct { unsigned char presenceEventGranularity : 1; unsigned char presenceEventType : 1; } _has;
}

@property (nonatomic) BOOL hasPresenceEventType;
@property (nonatomic) int presenceEventType;
@property (nonatomic) BOOL hasPresenceEventGranularity;
@property (nonatomic) int presenceEventGranularity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)presenceEventTypeAsString:(int)a0;
- (int)StringAsPresenceEventType:(id)a0;
- (id)presenceEventGranularityAsString:(int)a0;
- (int)StringAsPresenceEventGranularity:(id)a0;

@end
