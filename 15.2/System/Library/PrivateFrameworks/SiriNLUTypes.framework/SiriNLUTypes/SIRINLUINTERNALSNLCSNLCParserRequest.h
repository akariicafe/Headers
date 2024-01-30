@class SIRINLUEXTERNALTurnInput, SIRINLUEXTERNALLegacyNLContext, SIRINLUINTERNALNLv4EmbeddingTensor, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLV4_PARSERTokenisation, NSMutableArray;

@interface SIRINLUINTERNALSNLCSNLCParserRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) BOOL hasTokenisedUtterance;
@property (retain, nonatomic) SIRINLUINTERNALNLV4_PARSERTokenisation *tokenisedUtterance;
@property (readonly, nonatomic) BOOL hasEmbeddings;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) BOOL hasTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;
@property (readonly, nonatomic) BOOL hasLegacyContext;
@property (retain, nonatomic) SIRINLUEXTERNALLegacyNLContext *legacyContext;

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
