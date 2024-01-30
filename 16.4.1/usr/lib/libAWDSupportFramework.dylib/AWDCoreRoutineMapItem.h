@interface AWDCoreRoutineMapItem : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _mapItemSources;
    struct { unsigned char hasMuid : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long mapItemSourcesCount;
@property (readonly, nonatomic) int *mapItemSources;
@property (nonatomic) BOOL hasHasMuid;
@property (nonatomic) BOOL hasMuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addMapItemSources:(int)a0;
- (int)StringAsMapItemSources:(id)a0;
- (void)clearMapItemSources;
- (id)mapItemSourcesAsString:(int)a0;
- (int)mapItemSourcesAtIndex:(unsigned long long)a0;
- (void)setMapItemSources:(int *)a0 count:(unsigned long long)a1;

@end
