@class NSString;

@interface NWAWDNWProtocolEstablishmentReport : PBCodable <NSCopying> {
    struct { unsigned char handshakeMilliseconds : 1; unsigned char handshakeRTTMilliseconds : 1; unsigned char protocolIndex : 1; } _has;
}

@property (nonatomic) BOOL hasProtocolIndex;
@property (nonatomic) int protocolIndex;
@property (readonly, nonatomic) BOOL hasProtocolName;
@property (retain, nonatomic) NSString *protocolName;
@property (nonatomic) BOOL hasHandshakeMilliseconds;
@property (nonatomic) unsigned long long handshakeMilliseconds;
@property (nonatomic) BOOL hasHandshakeRTTMilliseconds;
@property (nonatomic) unsigned long long handshakeRTTMilliseconds;

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
