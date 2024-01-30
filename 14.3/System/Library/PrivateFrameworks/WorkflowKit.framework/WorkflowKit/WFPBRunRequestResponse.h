@class NSString, NSMutableArray, NSData;

@interface WFPBRunRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *runRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *variablesDatas;
@property (retain, nonatomic) NSMutableArray *outputDatas;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)variablesDataType;
+ (Class)outputDataType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearVariablesDatas;
- (void)addVariablesData:(id)a0;
- (unsigned long long)variablesDatasCount;
- (id)variablesDataAtIndex:(unsigned long long)a0;
- (void)clearOutputDatas;
- (void)addOutputData:(id)a0;
- (unsigned long long)outputDatasCount;
- (id)outputDataAtIndex:(unsigned long long)a0;

@end
