@class NSMutableArray;

@interface CLPCellNeighborsGroup : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *gsmNeighbors;
@property (retain, nonatomic) NSMutableArray *scdmaNeighbors;
@property (retain, nonatomic) NSMutableArray *cdmaNeighbors;
@property (retain, nonatomic) NSMutableArray *lteNeighbors;
@property (retain, nonatomic) NSMutableArray *nrNeighbors;

+ (Class)gsmNeighborsType;
+ (Class)scdmaNeighborsType;
+ (Class)cdmaNeighborsType;
+ (Class)lteNeighborsType;
+ (Class)nrNeighborsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addGsmNeighbors:(id)a0;
- (void)addScdmaNeighbors:(id)a0;
- (void)addCdmaNeighbors:(id)a0;
- (void)addLteNeighbors:(id)a0;
- (void)addNrNeighbors:(id)a0;
- (unsigned long long)gsmNeighborsCount;
- (void)clearGsmNeighbors;
- (id)gsmNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)scdmaNeighborsCount;
- (void)clearScdmaNeighbors;
- (id)scdmaNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)cdmaNeighborsCount;
- (void)clearCdmaNeighbors;
- (id)cdmaNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)lteNeighborsCount;
- (void)clearLteNeighbors;
- (id)lteNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)nrNeighborsCount;
- (void)clearNrNeighbors;
- (id)nrNeighborsAtIndex:(unsigned long long)a0;

@end
