@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying> {
    struct { unsigned char configurationExtension : 1; } _has;
}

@property (nonatomic) int configuration;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) BOOL hasConfigurationExtension;
@property (nonatomic) int configurationExtension;

+ (int)bandwidthConfigurationWithOperatingMode:(int)a0 connectionType:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsConfigurationExtension:(id)a0;
- (int)StringAsConfiguration:(id)a0;
- (id)configurationExtensionAsString:(int)a0;
- (id)configurationAsString:(int)a0;
- (id)newBandwidthConfigurations;

@end
