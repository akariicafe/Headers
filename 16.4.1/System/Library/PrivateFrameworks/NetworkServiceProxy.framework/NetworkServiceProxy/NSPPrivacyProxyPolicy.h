@interface NSPPrivacyProxyPolicy : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _conditions;
}

@property (readonly, nonatomic) unsigned long long conditionsCount;
@property (readonly, nonatomic) int *conditions;

- (int)StringAsConditions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearConditions;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addConditions:(int)a0;
- (id)conditionsAsString:(int)a0;
- (void)setConditions:(int *)a0 count:(unsigned long long)a1;
- (void)writeTo:(id)a0;
- (int)conditionsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
