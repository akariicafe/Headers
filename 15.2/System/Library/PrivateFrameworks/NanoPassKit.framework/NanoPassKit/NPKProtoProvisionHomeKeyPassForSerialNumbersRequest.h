@class NSMutableArray;

@interface NPKProtoProvisionHomeKeyPassForSerialNumbersRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *serialNumbers;

+ (Class)serialNumbersType;

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
- (void)addSerialNumbers:(id)a0;
- (unsigned long long)serialNumbersCount;
- (void)clearSerialNumbers;
- (id)serialNumbersAtIndex:(unsigned long long)a0;

@end
