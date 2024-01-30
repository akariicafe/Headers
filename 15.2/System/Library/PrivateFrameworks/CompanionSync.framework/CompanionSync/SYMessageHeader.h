@class SYVectorClock, SYPeer;

@interface SYMessageHeader : PBCodable <NSCopying> {
    struct { unsigned char timeout : 1; } _has;
}

@property (nonatomic) double timestamp;
@property (retain, nonatomic) SYPeer *sender;
@property (retain, nonatomic) SYVectorClock *state;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) BOOL hasTimeout;
@property (nonatomic) double timeout;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
