@class NSData;

@interface AWDNFCHCEStartEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char messageSize : 1; unsigned char messageType : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasMessageSize;
@property (nonatomic) unsigned int messageSize;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;

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
