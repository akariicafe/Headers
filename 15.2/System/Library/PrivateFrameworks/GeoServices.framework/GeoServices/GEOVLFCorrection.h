@interface GEOVLFCorrection : PBCodable <NSCopying> {
    unsigned int _altitudeCorrectionMagnitude;
    unsigned int _headingCorrectionMagnitude;
    unsigned int _locationCorrectionMagnitude;
    struct { unsigned char has_altitudeCorrectionMagnitude : 1; unsigned char has_headingCorrectionMagnitude : 1; unsigned char has_locationCorrectionMagnitude : 1; } _flags;
}

@property (nonatomic) BOOL hasLocationCorrectionMagnitude;
@property (nonatomic) unsigned int locationCorrectionMagnitude;
@property (nonatomic) BOOL hasHeadingCorrectionMagnitude;
@property (nonatomic) unsigned int headingCorrectionMagnitude;
@property (nonatomic) BOOL hasAltitudeCorrectionMagnitude;
@property (nonatomic) unsigned int altitudeCorrectionMagnitude;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
