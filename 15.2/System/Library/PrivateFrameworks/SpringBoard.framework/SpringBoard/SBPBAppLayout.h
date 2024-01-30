@class SBPBDisplayItem;

@interface SBPBAppLayout : PBCodable <NSCopying> {
    int _centerConfiguration;
    int _environment;
    int _layoutConfiguration;
    SBPBDisplayItem *_primaryDisplayItem;
    SBPBDisplayItem *_secondaryDisplayItem;
    int _secondaryDisplayItemRole;
    SBPBDisplayItem *_tertiaryDisplayItem;
    int _tertiaryDisplayItemRole;
    BOOL _hidden;
    struct { unsigned char secondaryDisplayItemRole : 1; unsigned char tertiaryDisplayItemRole : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
