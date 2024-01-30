@interface RfBandDuration : PBCodable <NSCopying> {
    struct { unsigned char durationMs : 1; unsigned char eutraRfBand : 1; unsigned char geraRfBand : 1; unsigned char rat : 1; unsigned char utraFddRfBand : 1; unsigned char utraTddRfBand : 1; } _has;
}

@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasGeraRfBand;
@property (nonatomic) int geraRfBand;
@property (nonatomic) BOOL hasUtraFddRfBand;
@property (nonatomic) int utraFddRfBand;
@property (nonatomic) BOOL hasUtraTddRfBand;
@property (nonatomic) int utraTddRfBand;
@property (nonatomic) BOOL hasEutraRfBand;
@property (nonatomic) int eutraRfBand;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)ratAsString:(int)a0;
- (int)StringAsRat:(id)a0;
- (id)geraRfBandAsString:(int)a0;
- (int)StringAsGeraRfBand:(id)a0;
- (id)utraFddRfBandAsString:(int)a0;
- (int)StringAsUtraFddRfBand:(id)a0;
- (id)utraTddRfBandAsString:(int)a0;
- (int)StringAsUtraTddRfBand:(id)a0;
- (id)eutraRfBandAsString:(int)a0;
- (int)StringAsEutraRfBand:(id)a0;

@end
