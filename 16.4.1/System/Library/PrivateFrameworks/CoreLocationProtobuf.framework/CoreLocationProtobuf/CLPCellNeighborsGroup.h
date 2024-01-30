@class NSMutableArray;

@interface CLPCellNeighborsGroup : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *gsmNeighbors;
@property (retain, nonatomic) NSMutableArray *scdmaNeighbors;
@property (retain, nonatomic) NSMutableArray *cdmaNeighbors;
@property (retain, nonatomic) NSMutableArray *lteNeighbors;
@property (retain, nonatomic) NSMutableArray *nrNeighbors;

+ (Class)nrNeighborsType;
+ (Class)cdmaNeighborsType;
+ (Class)gsmNeighborsType;
+ (Class)lteNeighborsType;
+ (Class)scdmaNeighborsType;

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
- (void)addNrNeighbors:(id)a0;
- (void)addCdmaNeighbors:(id)a0;
- (void)addGsmNeighbors:(id)a0;
- (void)addLteNeighbors:(id)a0;
- (void)addScdmaNeighbors:(id)a0;
- (id)cdmaNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)cdmaNeighborsCount;
- (void)clearCdmaNeighbors;
- (void)clearGsmNeighbors;
- (void)clearLteNeighbors;
- (void)clearNrNeighbors;
- (void)clearScdmaNeighbors;
- (id)gsmNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)gsmNeighborsCount;
- (id)lteNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)lteNeighborsCount;
- (id)nrNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)nrNeighborsCount;
- (id)scdmaNeighborsAtIndex:(unsigned long long)a0;
- (unsigned long long)scdmaNeighborsCount;

@end
