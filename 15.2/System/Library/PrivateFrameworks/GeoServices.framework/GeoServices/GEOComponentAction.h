@interface GEOComponentAction : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _actions;
    int _component;
    BOOL _handleLocally;
    struct { unsigned char has_component : 1; unsigned char has_handleLocally : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
