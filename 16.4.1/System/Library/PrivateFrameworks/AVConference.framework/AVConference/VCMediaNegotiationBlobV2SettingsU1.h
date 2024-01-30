@interface VCMediaNegotiationBlobV2SettingsU1 : PBCodable <NSCopying> {
    struct { unsigned char rtpSSRC : 1; } _has;
}

@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithU1Config:(id)a0;
- (id)u1Config;

@end
