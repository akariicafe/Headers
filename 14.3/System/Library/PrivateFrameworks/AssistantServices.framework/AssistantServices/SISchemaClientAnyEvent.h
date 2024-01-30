@class NSData;

@interface SISchemaClientAnyEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasEventData;
@property (retain, nonatomic) NSData *eventData;

- (id)si_dictionaryRepresentation;
- (void).cxx_destruct;
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
