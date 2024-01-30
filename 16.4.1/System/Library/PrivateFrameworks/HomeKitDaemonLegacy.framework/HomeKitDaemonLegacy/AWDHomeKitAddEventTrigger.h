@class AWDHomeKitEventTrigger;

@interface AWDHomeKitAddEventTrigger : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char requestOrigin : 1; unsigned char resultErrorCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) unsigned int resultErrorCode;
@property (readonly, nonatomic) BOOL hasEventTrigger;
@property (retain, nonatomic) AWDHomeKitEventTrigger *eventTrigger;
@property (nonatomic) BOOL hasRequestOrigin;
@property (nonatomic) int requestOrigin;

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
- (int)StringAsRequestOrigin:(id)a0;
- (id)requestOriginAsString:(int)a0;

@end
