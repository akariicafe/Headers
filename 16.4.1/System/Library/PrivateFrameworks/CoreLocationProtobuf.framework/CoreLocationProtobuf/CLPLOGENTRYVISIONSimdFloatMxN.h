@class NSMutableArray;

@interface CLPLOGENTRYVISIONSimdFloatMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *columns;

+ (Class)columnsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)columnsCount;
- (id)columnsAtIndex:(unsigned long long)a0;
- (void)addColumns:(id)a0;
- (void)clearColumns;

@end
