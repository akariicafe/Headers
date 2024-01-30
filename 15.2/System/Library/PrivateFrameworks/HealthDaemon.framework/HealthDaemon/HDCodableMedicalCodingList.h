@class NSMutableArray;

@interface HDCodableMedicalCodingList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;

- (void)addItems:(id)a0;
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
- (unsigned long long)itemsCount;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;

@end
