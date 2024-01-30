@class NSMutableArray;

@interface NPKProtoRegisterSubcredentialsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *passesDatas;
@property (retain, nonatomic) NSMutableArray *errorsDatas;

+ (Class)passesDataType;
+ (Class)errorsDataType;

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
- (void)addPassesData:(id)a0;
- (void)addErrorsData:(id)a0;
- (unsigned long long)passesDatasCount;
- (void)clearPassesDatas;
- (id)passesDataAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsDatasCount;
- (void)clearErrorsDatas;
- (id)errorsDataAtIndex:(unsigned long long)a0;

@end
