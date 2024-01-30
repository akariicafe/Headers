@interface GEOComponentAction : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _actions;
    int _component;
    BOOL _handleLocally;
    struct { unsigned char has_component : 1; unsigned char has_handleLocally : 1; } _flags;
}

@property (nonatomic) BOOL hasComponent;
@property (nonatomic) int component;
@property (readonly, nonatomic) unsigned long long actionsCount;
@property (readonly, nonatomic) int *actions;
@property (nonatomic) BOOL hasHandleLocally;
@property (nonatomic) BOOL handleLocally;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (void)addActions:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearActions;
- (int)actionsAtIndex:(unsigned long long)a0;
- (id)componentAsString:(int)a0;
- (int)StringAsComponent:(id)a0;
- (void)setActions:(int *)a0 count:(unsigned long long)a1;
- (id)actionsAsString:(int)a0;
- (int)StringAsActions:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
