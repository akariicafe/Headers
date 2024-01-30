@interface GEOAutoCompleteResultInfo : PBCodable <NSCopying> {
    int _suggestionsAcType;
    struct { unsigned char has_suggestionsAcType : 1; } _flags;
}

@property (nonatomic) BOOL hasSuggestionsAcType;
@property (nonatomic) int suggestionsAcType;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)suggestionsAcTypeAsString:(int)a0;
- (int)StringAsSuggestionsAcType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
