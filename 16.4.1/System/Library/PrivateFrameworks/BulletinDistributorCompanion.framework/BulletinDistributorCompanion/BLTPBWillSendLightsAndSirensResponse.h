@interface BLTPBWillSendLightsAndSirensResponse : PBCodable <NSCopying> {
    struct { unsigned char additionalWait : 1; unsigned char willSend : 1; } _has;
}

@property (nonatomic) BOOL hasWillSend;
@property (nonatomic) BOOL willSend;
@property (nonatomic) BOOL hasAdditionalWait;
@property (nonatomic) unsigned int additionalWait;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
