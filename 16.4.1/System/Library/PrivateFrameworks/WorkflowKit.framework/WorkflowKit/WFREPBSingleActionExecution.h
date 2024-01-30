@class NSString, NSMutableArray, NSData;

@interface WFREPBSingleActionExecution : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) NSMutableArray *variables;
@property (retain, nonatomic) NSMutableArray *processedParameters;
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (retain, nonatomic) NSMutableArray *inputs;

+ (Class)inputType;
+ (Class)processedParametersType;
+ (Class)variablesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addInput:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addProcessedParameters:(id)a0;
- (void)addVariables:(id)a0;
- (void)clearInputs;
- (void)clearProcessedParameters;
- (void)clearVariables;
- (id)inputAtIndex:(unsigned long long)a0;
- (unsigned long long)inputsCount;
- (id)processedParametersAtIndex:(unsigned long long)a0;
- (unsigned long long)processedParametersCount;
- (id)variablesAtIndex:(unsigned long long)a0;
- (unsigned long long)variablesCount;

@end
