@class NSMutableArray;

@interface ACHCodableEarnedInstanceArray : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *earnedInstances;

+ (Class)earnedInstancesType;

- (id)earnedInstancesAtIndex:(unsigned long long)a0;
- (void)clearEarnedInstances;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addEarnedInstances:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)earnedInstancesCount;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCodableEarnedInstances:(id)a0;

@end
