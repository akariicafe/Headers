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

- (id)cdmaNeighborsAtIndex:(unsigned long long)a0;
- (void)clearNrNeighbors;
- (unsigned long long)cdmaNeighborsCount;
- (void)addGsmNeighbors:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addNrNeighbors:(id)a0;
- (void)addLteNeighbors:(id)a0;
- (id)nrNeighborsAtIndex:(unsigned long long)a0;
- (void)clearScdmaNeighbors;
- (id)gsmNeighborsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearCdmaNeighbors;
- (void)addCdmaNeighbors:(id)a0;
- (id)description;
- (void)clearLteNeighbors;
- (unsigned long long)lteNeighborsCount;
- (unsigned long long)gsmNeighborsCount;
- (id)scdmaNeighborsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void)clearGsmNeighbors;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)scdmaNeighborsCount;
- (void)addScdmaNeighbors:(id)a0;
- (id)lteNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)nrNeighborsCount;

@end
