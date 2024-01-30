@class PBUnknownFields;

@interface GEOTransitLeg : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _restrictedToSectionIndexs;
    int _sectionOptionIndex;
    struct { unsigned char has_sectionOptionIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasSectionOptionIndex;
@property (nonatomic) int sectionOptionIndex;
@property (readonly, nonatomic) unsigned long long restrictedToSectionIndexsCount;
@property (readonly, nonatomic) int *restrictedToSectionIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addRestrictedToSectionIndex:(int)a0;
- (void)clearRestrictedToSectionIndexs;
- (int)restrictedToSectionIndexAtIndex:(unsigned long long)a0;
- (void)setRestrictedToSectionIndexs:(int *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
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
