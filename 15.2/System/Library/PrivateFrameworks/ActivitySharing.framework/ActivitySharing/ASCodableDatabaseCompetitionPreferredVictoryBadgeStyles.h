@interface ASCodableDatabaseCompetitionPreferredVictoryBadgeStyles : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _styles;
}

@property (readonly, nonatomic) unsigned long long stylesCount;
@property (readonly, nonatomic) int *styles;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)clearStyles;
- (int)stylesAtIndex:(unsigned long long)a0;
- (void)addStyles:(int)a0;
- (void)setStyles:(int *)a0 count:(unsigned long long)a1;

@end
