@class NSMutableArray;

@interface AWDWiFiMetricNetworkPrefs : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char adhocNetsCount : 1; unsigned char applePersHotspotNetsCount : 1; unsigned char atjCanceledCount : 1; unsigned char atjUsedCount : 1; unsigned char captiveNetsCount : 1; unsigned char eapNetsCount : 1; unsigned char hiddenNetsCount : 1; unsigned char mostUsedCount : 1; unsigned char openNonCaptiveNetsCount : 1; unsigned char prefNetsCount : 1; unsigned char wapiNetsCount : 1; unsigned char wepNetsCount : 1; unsigned char wpaNetsCount : 1; unsigned char atjEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasAtjEnabled;
@property (nonatomic) BOOL atjEnabled;
@property (nonatomic) BOOL hasAtjCanceledCount;
@property (nonatomic) unsigned int atjCanceledCount;
@property (nonatomic) BOOL hasAtjUsedCount;
@property (nonatomic) unsigned int atjUsedCount;
@property (nonatomic) BOOL hasAdhocNetsCount;
@property (nonatomic) unsigned int adhocNetsCount;
@property (nonatomic) BOOL hasPrefNetsCount;
@property (nonatomic) unsigned int prefNetsCount;
@property (nonatomic) BOOL hasCaptiveNetsCount;
@property (nonatomic) unsigned int captiveNetsCount;
@property (nonatomic) BOOL hasApplePersHotspotNetsCount;
@property (nonatomic) unsigned int applePersHotspotNetsCount;
@property (nonatomic) BOOL hasWapiNetsCount;
@property (nonatomic) unsigned int wapiNetsCount;
@property (nonatomic) BOOL hasMostUsedCount;
@property (nonatomic) unsigned int mostUsedCount;
@property (retain, nonatomic) NSMutableArray *mostUsedNetworks;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasHiddenNetsCount;
@property (nonatomic) unsigned int hiddenNetsCount;
@property (nonatomic) BOOL hasWepNetsCount;
@property (nonatomic) unsigned int wepNetsCount;
@property (nonatomic) BOOL hasWpaNetsCount;
@property (nonatomic) unsigned int wpaNetsCount;
@property (nonatomic) BOOL hasEapNetsCount;
@property (nonatomic) unsigned int eapNetsCount;
@property (nonatomic) BOOL hasOpenNonCaptiveNetsCount;
@property (nonatomic) unsigned int openNonCaptiveNetsCount;

+ (Class)mostUsedNetworksType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addMostUsedNetworks:(id)a0;
- (void)clearMostUsedNetworks;
- (id)mostUsedNetworksAtIndex:(unsigned long long)a0;
- (unsigned long long)mostUsedNetworksCount;

@end
