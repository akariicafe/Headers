@interface ATXNotificationsPBEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char event : 1; unsigned char pos : 1; unsigned char isOffscreen : 1; unsigned char topOfPile : 1; } _has;
}

@property (nonatomic) BOOL hasEvent;
@property (nonatomic) int event;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIsOffscreen;
@property (nonatomic) BOOL isOffscreen;
@property (nonatomic) BOOL hasPos;
@property (nonatomic) int pos;
@property (nonatomic) BOOL hasTopOfPile;
@property (nonatomic) BOOL topOfPile;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)eventAsString:(int)a0;
- (int)StringAsEvent:(id)a0;

@end
