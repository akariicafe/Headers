@class NSString;

@interface NTPBTodaySectionIdentifierToGroupTypes : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _groupTypes;
}

@property (retain, nonatomic) NSString *personalizationSectionIdentifier;
@property (readonly, nonatomic) unsigned long long groupTypesCount;
@property (readonly, nonatomic) int *groupTypes;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)groupTypesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addGroupTypes:(int)a0;
- (void)clearGroupTypes;
- (void)setGroupTypes:(int *)a0 count:(unsigned long long)a1;
- (id)groupTypesAsString:(int)a0;
- (int)StringAsGroupTypes:(id)a0;

@end
