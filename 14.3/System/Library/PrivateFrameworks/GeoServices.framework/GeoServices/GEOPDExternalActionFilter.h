@class PBUnknownFields;

@interface GEOPDExternalActionFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _componentTypes;
}

@property (readonly, nonatomic) unsigned long long componentTypesCount;
@property (readonly, nonatomic) int *componentTypes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addComponentType:(int)a0;
- (void)clearComponentTypes;
- (int)componentTypeAtIndex:(unsigned long long)a0;
- (void)setComponentTypes:(int *)a0 count:(unsigned long long)a1;
- (id)componentTypesAsString:(int)a0;
- (int)StringAsComponentTypes:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
