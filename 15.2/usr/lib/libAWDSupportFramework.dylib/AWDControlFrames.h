@interface AWDControlFrames : PBCodable <NSCopying> {
    struct { unsigned char ack : 1; unsigned char blockAck : 1; unsigned char blockAckRequest : 1; unsigned char cFend : 1; unsigned char cFendCFack : 1; unsigned char cts : 1; unsigned char psPoll : 1; unsigned char rts : 1; } _has;
}

@property (nonatomic) BOOL hasBlockAckRequest;
@property (nonatomic) unsigned long long blockAckRequest;
@property (nonatomic) BOOL hasBlockAck;
@property (nonatomic) unsigned long long blockAck;
@property (nonatomic) BOOL hasPsPoll;
@property (nonatomic) unsigned long long psPoll;
@property (nonatomic) BOOL hasRts;
@property (nonatomic) unsigned long long rts;
@property (nonatomic) BOOL hasCts;
@property (nonatomic) unsigned long long cts;
@property (nonatomic) BOOL hasAck;
@property (nonatomic) unsigned long long ack;
@property (nonatomic) BOOL hasCFend;
@property (nonatomic) unsigned long long cFend;
@property (nonatomic) BOOL hasCFendCFack;
@property (nonatomic) unsigned long long cFendCFack;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
