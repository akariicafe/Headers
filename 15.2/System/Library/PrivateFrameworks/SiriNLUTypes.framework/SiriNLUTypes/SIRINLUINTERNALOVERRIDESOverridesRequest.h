@class NSString, SIRINLUINTERNALTokenChain, NSMutableArray, SIRINLUEXTERNALTurnContext;

@interface SIRINLUINTERNALOVERRIDESOverridesRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (retain, nonatomic) NSMutableArray *systemDialogActs;
@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext;
@property (retain, nonatomic) NSMutableArray *inputs;

+ (Class)matchingSpansType;
+ (Class)systemDialogActsType;
+ (Class)inputsType;

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
- (void)addInputs:(id)a0;
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (unsigned long long)matchingSpansCount;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (void)addSystemDialogActs:(id)a0;
- (void)clearSystemDialogActs;
- (unsigned long long)systemDialogActsCount;
- (id)systemDialogActsAtIndex:(unsigned long long)a0;
- (void)clearInputs;
- (unsigned long long)inputsCount;
- (id)inputsAtIndex:(unsigned long long)a0;

@end
