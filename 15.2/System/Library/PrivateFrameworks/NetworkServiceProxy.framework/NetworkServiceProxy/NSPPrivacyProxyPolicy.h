@interface NSPPrivacyProxyPolicy : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _conditions;
}

@property (readonly, nonatomic) unsigned long long conditionsCount;
@property (readonly, nonatomic) int *conditions;

- (void)setConditions:(int *)a0 count:(unsigned long long)a1;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)conditionsAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsConditions:(id)a0;
- (int)conditionsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearConditions;
- (unsigned long long)hash;
- (void)dealloc;
- (void)addConditions:(int)a0;
- (id)dictionaryRepresentation;

@end
