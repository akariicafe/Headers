@class GEOPreferenceEntity, PBUnknownFields;

@interface GEOEVChargingPreference : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPreferenceEntity *_preferenceEntity;
    int _preferenceType;
    struct { unsigned char has_preferenceType : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPreferenceEntity;
@property (retain, nonatomic) GEOPreferenceEntity *preferenceEntity;
@property (nonatomic) BOOL hasPreferenceType;
@property (nonatomic) int preferenceType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsPreferenceType:(id)a0;
- (id)preferenceTypeAsString:(int)a0;

@end
