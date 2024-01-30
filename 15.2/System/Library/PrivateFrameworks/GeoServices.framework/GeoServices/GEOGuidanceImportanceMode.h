@class PBUnknownFields;

@interface GEOGuidanceImportanceMode : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _guidancePreferenceTypes;
}

@property (readonly, nonatomic) unsigned long long guidancePreferenceTypesCount;
@property (readonly, nonatomic) int *guidancePreferenceTypes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)addGuidancePreferenceType:(int)a0;
- (void)clearGuidancePreferenceTypes;
- (int)guidancePreferenceTypeAtIndex:(unsigned long long)a0;
- (void)setGuidancePreferenceTypes:(int *)a0 count:(unsigned long long)a1;
- (id)guidancePreferenceTypesAsString:(int)a0;
- (int)StringAsGuidancePreferenceTypes:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
