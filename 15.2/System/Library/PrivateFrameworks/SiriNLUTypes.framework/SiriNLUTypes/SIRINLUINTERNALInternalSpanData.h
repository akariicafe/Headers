@class SIRINLUINTERNALSiriVocabularySpanData, SIRINLUINTERNALPLUMSpanData, SIRINLUINTERNALOvertonKGSpanData;

@interface SIRINLUINTERNALInternalSpanData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) SIRINLUINTERNALSiriVocabularySpanData *siriVocabularySpanData;
@property (readonly, nonatomic) BOOL hasPlumSpanData;
@property (retain, nonatomic) SIRINLUINTERNALPLUMSpanData *plumSpanData;
@property (readonly, nonatomic) BOOL hasOvertonKgSpanData;
@property (retain, nonatomic) SIRINLUINTERNALOvertonKGSpanData *overtonKgSpanData;

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

@end
