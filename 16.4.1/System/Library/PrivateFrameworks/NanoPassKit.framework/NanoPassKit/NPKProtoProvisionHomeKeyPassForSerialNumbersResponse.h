@class NSData, NSMutableArray;

@interface NPKProtoProvisionHomeKeyPassForSerialNumbersResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *provisionedPassesDatas;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)provisionedPassesDataType;

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
- (void)addProvisionedPassesData:(id)a0;
- (void)clearProvisionedPassesDatas;
- (id)provisionedPassesDataAtIndex:(unsigned long long)a0;
- (unsigned long long)provisionedPassesDatasCount;

@end
