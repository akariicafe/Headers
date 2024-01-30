@interface AWDDEDFinisherEnded : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char numbytes : 1; unsigned char timestamp : 1; unsigned char state : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasNumbytes;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;

- (id)stateAsString:(int)a0;
- (int)StringAsState:(id)a0;
- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;

@end
