@class NSMutableArray;

@interface GEOLogMsgStateTileSet : PBCodable <NSCopying> {
    NSMutableArray *_tileSetInfos;
}

@property (retain, nonatomic) NSMutableArray *tileSetInfos;

+ (Class)tileSetInfoType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addTileSetInfo:(id)a0;
- (id)jsonRepresentation;
- (void)clearTileSetInfos;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)tileSetInfoAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)tileSetInfosCount;
- (id)initWithDictionary:(id)a0;

@end
