@class NSString, SIRINLUINTERNALTokenChain, NSMutableArray, SIRINLUEXTERNALTurnInput;

@interface SIRINLUINTERNALOVERRIDESTurnInputAndPreprocessing : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) BOOL hasTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;

+ (Class)matchingSpansType;

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
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (unsigned long long)matchingSpansCount;
- (id)matchingSpansAtIndex:(unsigned long long)a0;

@end
