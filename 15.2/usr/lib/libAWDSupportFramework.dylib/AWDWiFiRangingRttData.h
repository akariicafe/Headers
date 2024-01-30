@interface AWDWiFiRangingRttData : PBCodable <NSCopying> {
    struct { unsigned char bitErrorRate : 1; unsigned char channel : 1; unsigned char coreId : 1; unsigned char flags : 1; unsigned char losPeakRatio : 1; unsigned char peerBitErrorRate : 1; unsigned char peerCoreId : 1; unsigned char peerLosPeakRatio : 1; unsigned char peerPhyError : 1; unsigned char peerSnr : 1; unsigned char phyError : 1; unsigned char rssi : 1; unsigned char rtt : 1; unsigned char snr : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL hasFlags;
@property (nonatomic) unsigned int flags;
@property (nonatomic) BOOL hasRtt;
@property (nonatomic) unsigned int rtt;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasSnr;
@property (nonatomic) unsigned int snr;
@property (nonatomic) BOOL hasCoreId;
@property (nonatomic) unsigned int coreId;
@property (nonatomic) BOOL hasLosPeakRatio;
@property (nonatomic) unsigned int losPeakRatio;
@property (nonatomic) BOOL hasBitErrorRate;
@property (nonatomic) unsigned int bitErrorRate;
@property (nonatomic) BOOL hasPhyError;
@property (nonatomic) unsigned int phyError;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL hasPeerSnr;
@property (nonatomic) unsigned int peerSnr;
@property (nonatomic) BOOL hasPeerLosPeakRatio;
@property (nonatomic) unsigned int peerLosPeakRatio;
@property (nonatomic) BOOL hasPeerCoreId;
@property (nonatomic) unsigned int peerCoreId;
@property (nonatomic) BOOL hasPeerBitErrorRate;
@property (nonatomic) unsigned int peerBitErrorRate;
@property (nonatomic) BOOL hasPeerPhyError;
@property (nonatomic) unsigned int peerPhyError;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;

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
