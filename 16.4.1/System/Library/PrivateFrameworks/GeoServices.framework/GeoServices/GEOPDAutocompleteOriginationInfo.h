@class GEOPDAutocompleteOriginationRoutePlanningParameters, PBUnknownFields;

@interface GEOPDAutocompleteOriginationInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteOriginationRoutePlanningParameters *_routePlanningParameters;
    int _autocompleteOriginationType;
    struct { unsigned char has_autocompleteOriginationType : 1; } _flags;
}

@property (nonatomic) BOOL hasAutocompleteOriginationType;
@property (nonatomic) int autocompleteOriginationType;
@property (readonly, nonatomic) BOOL hasRoutePlanningParameters;
@property (retain, nonatomic) GEOPDAutocompleteOriginationRoutePlanningParameters *routePlanningParameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (int)StringAsAutocompleteOriginationType:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (id)autocompleteOriginationTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
