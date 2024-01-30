@interface VCMediaNegotiationBlobV2BandwidthSettings : PBCodable <NSCopying> {
    struct { unsigned char cap2G : 1; unsigned char cap3G : 1; unsigned char cap5G : 1; unsigned char capLTE : 1; unsigned char capWifi : 1; } _has;
}

@property (nonatomic) BOOL hasCap2G;
@property (nonatomic) unsigned int cap2G;
@property (nonatomic) BOOL hasCap3G;
@property (nonatomic) unsigned int cap3G;
@property (nonatomic) BOOL hasCapLTE;
@property (nonatomic) unsigned int capLTE;
@property (nonatomic) BOOL hasCap5G;
@property (nonatomic) unsigned int cap5G;
@property (nonatomic) BOOL hasCapWifi;
@property (nonatomic) unsigned int capWifi;

+ (id)filteredSetForOperatingMode:(int)a0 bandwidthConfigurations:(id)a1;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)bandwidthConfigurations;
- (id)initWithBandwidthConfigurations:(id)a0;
- (BOOL)isDefaultSettings;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;
- (BOOL)setupCapForBandwidthConfiguration:(id)a0;
- (void)setupCap2G:(unsigned int)a0;
- (void)setupCap3G:(unsigned int)a0;
- (void)setupCapLTE:(unsigned int)a0;
- (void)setupCap5G:(unsigned int)a0;
- (void)setupCapWifi:(unsigned int)a0;

@end
