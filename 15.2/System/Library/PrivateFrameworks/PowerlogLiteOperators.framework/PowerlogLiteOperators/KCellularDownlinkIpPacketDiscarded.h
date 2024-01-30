@class NSData;

@interface KCellularDownlinkIpPacketDiscarded : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char port : 1; unsigned char protocol : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) unsigned int protocol;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) unsigned int port;
@property (readonly, nonatomic) BOOL hasPacket;
@property (retain, nonatomic) NSData *packet;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

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
