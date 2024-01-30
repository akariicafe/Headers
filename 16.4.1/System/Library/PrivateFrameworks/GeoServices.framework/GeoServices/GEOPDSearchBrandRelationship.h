@class NSString;

@interface GEOPDSearchBrandRelationship : PBCodable <NSCopying> {
    unsigned long long _expandedParentMuid;
    unsigned long long _muid;
    unsigned long long _parentMuid;
    NSString *_relationshipType;
    struct { unsigned char has_expandedParentMuid : 1; unsigned char has_muid : 1; unsigned char has_parentMuid : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
