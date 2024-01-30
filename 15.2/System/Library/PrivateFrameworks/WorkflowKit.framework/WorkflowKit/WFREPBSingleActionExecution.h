@class NSString, NSMutableArray, NSData;

@interface WFREPBSingleActionExecution : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) NSMutableArray *variables;
@property (retain, nonatomic) NSMutableArray *processedParameters;
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (retain, nonatomic) NSMutableArray *inputs;

+ (Class)inputType;
+ (Class)variablesType;
+ (Class)processedParametersType;

- (void)addInput:(id)a0;
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
- (void)clearVariables;
- (void)addVariables:(id)a0;
- (unsigned long long)variablesCount;
- (id)variablesAtIndex:(unsigned long long)a0;
- (void)clearProcessedParameters;
- (void)addProcessedParameters:(id)a0;
- (unsigned long long)processedParametersCount;
- (id)processedParametersAtIndex:(unsigned long long)a0;
- (void)clearInputs;
- (unsigned long long)inputsCount;
- (id)inputAtIndex:(unsigned long long)a0;

@end
