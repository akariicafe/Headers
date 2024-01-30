@class SIRINLUINTERNALSPANMATCHSpanMatchResponse, SIRINLUINTERNALEMBEDDINGEmbeddingResponse, SIRINLUINTERNALTOKENIZERTokenizerResponse, SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse;

@interface SIRINLUINTERNALPreprocessingWrapper : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTokenizerResponse;
@property (retain, nonatomic) SIRINLUINTERNALTOKENIZERTokenizerResponse *tokenizerResponse;
@property (readonly, nonatomic) BOOL hasSpanMatchResponse;
@property (retain, nonatomic) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse;
@property (readonly, nonatomic) BOOL hasEmbeddingResponse;
@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *embeddingResponse;
@property (readonly, nonatomic) BOOL hasMentionResolverResponse;
@property (retain, nonatomic) SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse *mentionResolverResponse;

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

@end
