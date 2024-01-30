@interface AWDDEDBugSessionEnded : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char sessionState : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSessionState;
@property (nonatomic) int sessionState;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)sessionStateAsString:(int)a0;
- (int)StringAsSessionState:(id)a0;

@end
