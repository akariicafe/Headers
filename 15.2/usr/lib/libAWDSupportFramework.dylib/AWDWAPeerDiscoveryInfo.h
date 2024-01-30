@interface AWDWAPeerDiscoveryInfo : PBCodable <NSCopying> {
    struct { unsigned char iOSPeers : 1; unsigned char macOSPeers : 1; unsigned char numPeersDiscovered : 1; unsigned char tvOSPeers : 1; } _has;
}

@property (nonatomic) BOOL hasNumPeersDiscovered;
@property (nonatomic) unsigned int numPeersDiscovered;
@property (nonatomic) BOOL hasIOSPeers;
@property (nonatomic) unsigned int iOSPeers;
@property (nonatomic) BOOL hasTvOSPeers;
@property (nonatomic) unsigned int tvOSPeers;
@property (nonatomic) BOOL hasMacOSPeers;
@property (nonatomic) unsigned int macOSPeers;

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
