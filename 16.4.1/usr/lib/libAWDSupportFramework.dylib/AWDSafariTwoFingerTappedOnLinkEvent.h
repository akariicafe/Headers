@interface AWDSafariTwoFingerTappedOnLinkEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char outcome : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) int outcome;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsOutcome:(id)a0;
- (id)outcomeAsString:(int)a0;

@end
