@class NSMutableArray;

@interface NPKProtoProvisionHomeKeyPassForSerialNumbersRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *serialNumbers;

+ (Class)serialNumbersType;

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
- (void)addSerialNumbers:(id)a0;
- (void)clearSerialNumbers;
- (id)serialNumbersAtIndex:(unsigned long long)a0;
- (unsigned long long)serialNumbersCount;

@end
