@class NSString, NSMutableArray;

@interface AWDTinCanCallEnded : PBCodable <NSCopying> {
    struct { unsigned char contactHash : 1; unsigned char timestamp : 1; unsigned char disconnectedReason : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasCsdCallUUID;
@property (retain, nonatomic) NSString *csdCallUUID;
@property (nonatomic) BOOL hasContactHash;
@property (nonatomic) unsigned long long contactHash;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasDisconnectedReason;
@property (nonatomic) unsigned int disconnectedReason;

+ (Class)eventsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEvents;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)eventsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;

@end
