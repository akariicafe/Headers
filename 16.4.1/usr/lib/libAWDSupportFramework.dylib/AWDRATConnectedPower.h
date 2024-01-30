@interface AWDRATConnectedPower : PBCodable <NSCopying> {
    struct { unsigned char powerConnSetupMicroWatt : 1; unsigned char powerConnectedMicroWatt : 1; unsigned char rAT : 1; } _has;
}

@property (nonatomic) BOOL hasRAT;
@property (nonatomic) int rAT;
@property (nonatomic) BOOL hasPowerConnectedMicroWatt;
@property (nonatomic) unsigned int powerConnectedMicroWatt;
@property (nonatomic) BOOL hasPowerConnSetupMicroWatt;
@property (nonatomic) unsigned int powerConnSetupMicroWatt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsRAT:(id)a0;
- (id)rATAsString:(int)a0;

@end
