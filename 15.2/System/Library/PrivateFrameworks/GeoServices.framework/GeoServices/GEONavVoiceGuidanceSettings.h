@interface GEONavVoiceGuidanceSettings : PBCodable <NSCopying> {
    int _navVoiceGuidanceLevel;
    int _transportMode;
    struct { unsigned char has_navVoiceGuidanceLevel : 1; unsigned char has_transportMode : 1; } _flags;
}

@property (nonatomic) BOOL hasNavVoiceGuidanceLevel;
@property (nonatomic) int navVoiceGuidanceLevel;
@property (nonatomic) BOOL hasTransportMode;
@property (nonatomic) int transportMode;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsTransportMode:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)transportModeAsString:(int)a0;
- (int)StringAsNavVoiceGuidanceLevel:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)navVoiceGuidanceLevelAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
